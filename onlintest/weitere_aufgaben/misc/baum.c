#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct tree{
  int anz;
  char wort[31];
  struct tree *liBlatt;
  struct tree *reBlatt;
};

typedef struct tree *baum;

baum blattErstellen(char *s);
baum hinzufuegen(baum b, char *s);
void show(baum b);
void showAnzahl(baum b, int anz);
int countAnzahl(baum b, int anz);
char *get(baum b, char *key);
int contains(baum b, char *key);


baum blattErstellen(char *s){
  baum b = malloc(sizeof(struct tree));
  strcpy(b->wort,s);
  b->anz = 1;
  b->liBlatt = b->reBlatt = NULL;
  
  return b;
}

baum hinzufuegen(baum b, char *s){
  baum temp = NULL;

  /*baum ist leer*/
  if(!b){
    temp = blattErstellen(s);
    b = temp;
    return b;
  }
  else if(strcmp(b->wort, s) < 0){
    temp = hinzufuegen(b->liBlatt,s);
    if (!b->liBlatt){
      b->liBlatt = temp;
    }
  }
  else if(strcmp(b->wort,s) > 0){
    temp = hinzufuegen(b->reBlatt,s);
    if (!b->reBlatt){
      b->reBlatt = temp;
    }
  }
  else if(strcmp(b->wort,s) == 0){
    b->anz += 1;
  }
  return b;
}

void show(baum b){
  if (b){
    show(b->reBlatt);
    printf("%s: %d\n", b->wort, b->anz);
    show(b->liBlatt);
  }
}

int countAnzahl(baum b, int anz){
  if(b){
    countAnzahl(b->liBlatt, anz);
    if (b->anz > anz){
      anz = b->anz;
    }
    countAnzahl(b->liBlatt, anz);
  }
  return anz;
}

void showAnzahl(baum b, int anz){
  if (b){
    showAnzahl(b->reBlatt, anz);
    if(b->anz == anz){
      printf("%s: %d\n", b->wort, b->anz);
    }
    showAnzahl(b->liBlatt, anz);
  }
}

char *get(baum b, char *key){
  if(b){
    get(b->reBlatt, key);
    if(strcmp(b->wort, key) == 0){
      return b->wort;
    }
    get(b->liBlatt,key);
  }
}

int contains(baum b, char *key){
  if(b){
    get(b->reBlatt, key);
    if(strcmp(b->wort, key) == 0){
      return 1;
    }
    get(b->liBlatt,key);
  }
  return 0;
}
 
int main (void){
  baum b = NULL;
  b = hinzufuegen(b, "ich");
  b = hinzufuegen(b, "bin");
  b = hinzufuegen(b, "bunt");
  b = hinzufuegen(b, "ich");
  b = hinzufuegen(b, "bin");
  show(b);
  int anz = countAnzahl(b,0);
  printf("\nHaeufigkeit: \n\n");
  showAnzahl(b, anz);
  char * s= "";
  s = get(b, "ich");
  printf("%s\n",s);
  int c = contains(b, "du");
  printf("%d\n", c);

  return 0;
}
