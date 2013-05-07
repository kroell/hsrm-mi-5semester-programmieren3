#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct tree{
  int anz;
  char wort[31];
  struct tree *left;
  struct tree *right;
};
 
typedef struct tree* Tree;
 
Tree createTreeNode(char *str);
Tree add(Tree t,char *str);
void show(Tree t);
void showAnz(Tree t, int anz);
int countAnz(Tree t, int anz);
 
 
Tree createTreeNode(char *str){
  Tree n = malloc(sizeof(struct tree));
  strcpy(n->wort, str);
  n->anz = 1;
  n->left =  n->right = NULL;
  return n;
}
 
Tree add(Tree t,char *str){
  Tree new = NULL;
  if(!t){
    new = createTreeNode(str);
    t = new;
    return t;
  }else if(strcmp(t->wort, str) < 0){ /* str < t->wort */
    new = add(t->left, str);
    if(!t->left){
      t->left = new;
    }
  }else if(strcmp(t->wort, str) > 0){ /* str > t->wort */
    new = add(t->right, str);
    if(!t->right){
      t->right = new;
    }
  }else if(strcmp(t->wort, str) == 0){ /* str == t->wort */
    t->anz +=1;
  }
  return t;
}
 
int countAnz(Tree t, int anz){
  if(t){
    countAnz(t->left, anz);  
    if(t->anz > anz){
      anz = t->anz;
    }
    countAnz(t->left, anz);  
  }
  return anz;
}
 
char* get(Tree t, char* key){
  if(t){
    get(t->right, key);
    if(strcmp(t->wort, key) == 0){
      return t->wort;
    }
    get(t->left, key);
  }
}
 
int contains(Tree t, char* key){
  if(t){
    get(t->right, key);
    if(strcmp(t->wort, key) == 0){
      return 1;
    }
    get(t->left, key);
  }
  return 0;
}
 
void showAnz(Tree t, int anz){
  if(t){
    showAnz(t->right, anz);
    if(t->anz == anz){
      printf("%s: %d\n", t->wort, t->anz);
    }
    showAnz(t->left, anz);
  }
}
 
void show(Tree t){
  if(t){
    show(t->right);
    printf("%s: %d\n", t->wort, t->anz);
    show(t->left);
  }
}


int main(void){
 
  Tree t = NULL;
  t = add(t, "ich");
  t = add(t, "bin");
  t = add(t, "bunt");
  t = add(t, "ich");
 t = add(t, "bin");
  show(t);
  int anz = countAnz(t,0);
  printf("\nHaeufigkeit \n\n");
  showAnz(t, anz);

  return 0;
}
