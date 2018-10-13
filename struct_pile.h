#ifndef __STRUCT_PILE_H__ // Directive du pré-processeur
#define __STRUCT_PILE_H__ // permet d'éviter l'inclusion mutliple

// Structure de type pile: 
// Ce fichier possède l'ensemble des prototypes des fonctions travaillant sur TAD Pile
/*La structure de donnée de type pile est composé d'un element 
et pointe toujours vers un autre élement qui lui précéde 
*/ 


// Explication: la structure pile 
typedef struct pile
{
	int donnee; // 
	struct pile *precedent; 
}Pile;

/* pile_vide
input: une pile p
output: 
retourne 0 si l'allocation dynamique à echoué: 
retourne 1 si l'allocation réussi
*/
int pile_vide(Pile*);

/* pile_push
input: un element e et une pile p 
l'élément est non nulle si l'est l'affectation est correcte 
l'élément est nulle si l'affectation n'est pas correcte
*/
Pile* pile_push(Pile*,int);


/* maillon_vide
input: une pile e
retourne 0 si la création d'un maillon échoue 
retourne l'adresse du maillon si la création du maillon a reussi 
*/
Pile* nouveau_maillon();

#endif
