#include "struct_pile.h"
#include <stdio.h>
#include <stdlib.h>

void innitialisation(Pile* p)
{
	Pile* nouveau = malloc(sizeof(Pile));
	if (nouveau!=NULL)
	{
		p=nouveau;
	}
}
int pile_vide(Pile *p)
{

	if (p==NULL){return 0;} else{return 1;}
}

Pile* nouveau_maillon()
{
	Pile* nouveau = malloc(sizeof(Pile));
	if (nouveau==NULL)
	{
		return NULL;
	}
	else
		{nouveau->precedent=NULL;return nouveau;}
}

Pile* pile_push(Pile* p, int element)
{
	Pile *nouveau = nouveau_maillon();
	if (nouveau==NULL) {exit(1);}
	nouveau->donnee=element;
	nouveau->precedent=p;
	p=nouveau;
	return p;
}
