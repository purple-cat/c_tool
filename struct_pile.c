#include "struct_pile.h"
#include <stdio.h>
#include <stdlib.h>

pile pile_vide(){return NULL;}

int est_pile_vide(pile p){
	return p==NULL;
}

void push(pile *p,int donnee){
	pile new = malloc (sizeof(pile));
	if (new==NULL){exit(1);}
	new->donnee=donnee;
	new->prochain=*p;
    printf("valeur ajouté %d\n",donnee);
	*p=new;
}

int pop(pile *p){
    if (!est_pile_vide(*p)) {
        int result = (*p)->donnee;
        pile next=(*p)->prochain;
        free(*p);
        *p=next;
        return result;
    } else printf("la pile est vide ERREUR"); exit(0);
}

void destroy (pile p){
	while(p){
		pile prochain = p->prochain;
		free(p);
		p=prochain;

	} // different de nulle 
}

void rec_destroy (pile p){
	if (p)
	{
		pile inter=p->prochain;
		free(p);
		rec_destroy(inter);
	}
	printf("Fin destruction\n");
}

int tete_pile(pile *p){
    if (!est_pile_vide(*p)) {
        return (*p)->donnee;
        }
    else printf("La pile est vide ERREUR\n"); exit(0);
}

















