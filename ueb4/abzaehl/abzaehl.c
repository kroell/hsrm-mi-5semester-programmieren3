#include <stdio.h>
#include <stdlib.h>

int size_names;

struct _ring{
  struct _ring *next;
  char *name;
};
typedef struct _ring *rptr;


rptr add_name(rptr ring, char *name){
  rptr neuer_ring = malloc(sizeof(struct _ring));
  neuer_ring->name = name;
  /* Ring ist noch leer */
  if (ring == NULL){
    /*printf("Ring leer - Erstes Objekt wird eingefuegt!\n");*/
    neuer_ring->next = neuer_ring;
    return neuer_ring;
  }
  /* Es sind bereits Namen im String vorhanden */
  /*printf("Ring hat bereits mind. 1 Name - weitere werden geaddet!\n");*/
  neuer_ring->next = ring->next;
  ring->next = neuer_ring;	   
  
  return ring->next;
}


void show_ring(rptr ring){
  rptr start = ring;
  if (ring == NULL){
    printf("[]\n");
    return;
  }
  printf ("[");
  do{
   printf("%s ", ring->name);
   ring = ring->next;
  }while(ring != start);
  printf ("]\n");
}

/* funktioniert so nicht - NERV */
rptr abzaehl(rptr ring, int silben){
  rptr helper;
  
  while (silben--){
    ring = ring->next;
    printf("abzaehl: ");
    show_ring(ring);
  }
  helper = ring->next;
  ring->next = ring->next->next;
  free(helper);
 
  return ring;
}

int main (int argc, char * argv[]){
  int silben;
  int i;
  /* Leeren Ring erzeugen */
  rptr ring = NULL;

  if (argc <= 1){
    printf("Fehlende Argumente\n");
    return -1;
  }
  
  /*Einlesen Argument 1 - Anzahl der Silben */
  sscanf (argv[1], "%d", &silben);
  printf ("Silben: %d\n", silben);
  
  /*Einlesen der Namen*/
  for (i=2; i < argc; i++){
    /*printf ("Name: %s\n",argv[i]);*/
    ring = add_name (ring, argv[i]);
    show_ring(ring);
  }
  
  /* Anzahl der Namen */
  size_names = argc-2;
  printf("\n");

  /* Ring eins weiter setzen */
  ring = ring->next;
  show_ring(ring);

  while (ring != ring->next){
    ring = abzaehl(ring,silben);
    show_ring(ring);
  }
  return 0;
}
