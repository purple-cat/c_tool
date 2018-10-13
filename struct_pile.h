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

/*innitialisation_pile();
input : rien 
output : rien
*/
Pile* innitialisation_pile();



/*pile_vide
input : un element de type pile
output : retourne vrai si la pile p est vide
*/
int pile_vide(Pile*);



#endif
