#include <stdio.h>
#include <stdlib.h>

struct list{
  struct list *next;
  int value;
};

typedef struct list *liste;

int isEmpty(liste l);
liste enter(liste l, int value);
void show(liste l);
liste leaveLast(liste l);

int isEmpty(liste l){
  if (l == NULL){
    return 1;
  }
  return 0;
}

liste enter(liste l, int value){

  liste temp;
  liste neuerknoten;

  if(isEmpty(l)){
    l = malloc(sizeof(*l));
    l->value = value;
    l->next = NULL;
  }
  else{
    temp = l;
    while (temp->next != NULL){
      temp = temp->next;
    } 
    neuerknoten = malloc(sizeof(l));
    temp->next = neuerknoten;
    neuerknoten->value = value;
    neuerknoten->next = NULL;
  }
  return l;
}

void show(liste l){
  liste temp = l;
 
  while (temp->next != NULL){
    printf("Show: %d\n", temp->value);
    temp = temp->next;
  }
  printf("Show: %d\n", temp->value);
}

liste leaveLast(liste l){
  liste temp = l;

    while (temp->next->next){
      temp = temp->next;
    }
    printf("geloescht wird: %d\n\n", temp->next->value);
    free(temp->next);
    temp->next = NULL;
  
    return l;
}


liste leaveFirst(liste l){
  liste temp = l;
  if (!temp){
    return NULL;
  }
  l = temp->next;
  free(temp);
  printf("geloescht wird: %d\n\n", temp->value);

  return l;
}

int listSize(liste l){
  liste temp = l;
  int counter = 0;
  
  while (temp->next != NULL){
    counter++;
    temp = temp->next;
  }
  return counter+1;
}


int main (void){
  int i = 0;

  /* Leerer Liste erzeugen */
  liste l = NULL;
  
  if (isEmpty(l)){
    printf ("Liste ist leer\n\n");
  }
  printf ("Liste wird befuellt!\n");
  
  /* 5 Elemente einfuegen */
  for (i=1; i<4; i++){ 
    l = enter(l,i);
    printf ("Enter: %d\n",i);
  }

  printf ("\n");

  if (isEmpty(l)){
    printf ("Liste ist leer\n\n");
  }
  else {
    printf ("Liste ist nicht leer!\n\n");
  }

  printf("Size: %d\n\n", listSize(l));

  show(l); 

  printf ("\nLEAVE FIRST\n\n");
  l = leaveFirst(l);
  show(l);

  printf("\nSize: %d\n\n", listSize(l));
  printf ("\nLEAVE LAST\n\n");
  l = leaveLast(l);

  show(l);

  printf("\nSize: %d\n\n", listSize(l));
  printf ("\nLEAVE FIRST\n\n");

  l = leaveFirst(l);

  if (isEmpty(l)){
    printf ("Liste ist leer\n\n");
  }
  else {
    printf ("Liste ist nicht leer!\n\n");
  }

  return 0;
}
