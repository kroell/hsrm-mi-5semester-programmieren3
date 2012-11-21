/****************************************************/
/* abzaehl.c                                        */
/*                                                  */
/* Abzaehlaufgabe in der Vorlesung durch Prof Barth */
/* gecodet                                          */
/****************************************************/


#include <stdio.h>
#include <stdlib.h>

struct _ring {
 struct _ring *next;
 const char *name;
};
typedef struct _ring* rptr;

rptr add_name(rptr ring, const char *s){
 rptr neu = malloc(sizeof(struct _ring));
 neu->name = s;
 if(ring == NULL){
   neu->next = neu;
   return neu;
 }
 neu->next = ring->next;
 ring->next = neu;
 return ring->next;
}

void show_ring(rptr ring){
 rptr start = ring;
 if (ring == NULL){
   printf("[]\n");
   return;
 }
 do{
   printf("%s ", ring->name);
   ring = ring->next;
 }while(ring != start);

}

void del_ring(rptr ring){
 rptr n = ring->next;
 if(ring == NULL)
   return;
 while(n != ring->next){
   rptr h = ring->next;
   ring->next = ring->next->next;
   free(h);
 }
 free(ring);
}

rptr abzaehl(rptr ring, int silben){
 rptr h;
 while(silben--){
   ring=ring->next;
 }
 h = ring->next;
 ring->next = ring->next->next;
 free(h);
 return ring;
}

int main(int argc, char *argv[]){
 int silben;
 int i;
 rptr ring = NULL;

 if (argc <= 1){
   return -1;
 }
 sscanf(argv[1], "%d", &silben);
 /* printf("%d", &silben);*/

 for (i=2; i<argc; i++){
   show_ring(ring);
 }
 show_ring(ring);
 while(ring != ring->next){
   ring = abzaehl(ring,silben);
   show_ring(ring);
 }
 del_ring(ring);
 return 0;
}
