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
	*p=new;
}

int pop(pile *p){
	int result = (*p)->donnee;
	pile next=(*p)->prochain;
	free(*p);
	*p=next;
	return result;
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
	return (*p)->donnee;
}

















