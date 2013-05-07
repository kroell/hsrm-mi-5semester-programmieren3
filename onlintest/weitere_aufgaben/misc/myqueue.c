#include <stdio.h>
#include <stdlib.h>

struct queue{
  struct queue *next;
  int value;
};

typedef struct queue *lqueue;

lqueue enter (lqueue q, int value);
int is_empty (lqueue q);
int front (lqueue q);
lqueue leave (lqueue q);


/*Zahl am Ende der Q einfuegen*/
lqueue enter (lqueue q, int value){

  lqueue new_node;
  lqueue c_node;
  
  if (is_empty(q)){
    q = malloc(sizeof(*q));
    q->value = value;
    q->next = NULL;
  }
  else{
    c_node = q;
    while(c_node -> next != NULL){
      c_node = c_node->next;
    }
    new_node = malloc (sizeof(*q));
    c_node -> next = new_node;
    new_node-> value = value;
    new_node-> next = NULL;
  }
  return q;
}

int is_empty (lqueue q){
  if (q == NULL) return 1;
  return 0;
}

int front(lqueue q){
  return q->value;
}

lqueue leave (lqueue q){
  lqueue temp = q;
  q = temp->next;
  free(temp);
  return q;

}



int main(void){
  int i = 0;

  /* Leerer Queue erzeugen */
  lqueue intQueue = NULL;
  
  if (is_empty(intQueue) == 1){
    printf ("Queue ist leer\n");
  }

  printf ("Queue wird befuellt!\n");
  
  /* 10 Elemente einfuegen */
  for (i=1; i<5; i++){ 
    intQueue = enter(intQueue,i);
    printf ("Enter: %d\n",i);
  }

  printf ("\n");

  if (is_empty(intQueue) == 1){
    printf ("Queue ist leer\n");
  }
  else {
    printf ("Queue ist nicht leer!\n");
  }

  printf ("\n");
  
  printf ("Front: %d\n", front (intQueue));
  printf ("LEAVE\n");
  intQueue = leave (intQueue);
  printf ("Front-Neu: %d\n", front (intQueue));
  printf ("LEAVE\n");
  intQueue = leave (intQueue);
  printf ("Front-Neu2: %d\n", front (intQueue));
  printf ("LEAVE\n");
  intQueue = leave (intQueue);
  printf ("Front-Neu3: %d\n", front (intQueue));
  printf ("LEAVE\n");
  intQueue = leave (intQueue);


   if (is_empty(intQueue) == 1){
    printf ("Queue ist leer\n");
  }
  else {
    printf ("Queue ist nicht leer!\n");
  }

  return 0;
}
