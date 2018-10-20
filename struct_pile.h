#ifndef __STRUCT_PILE_H__ // Directive du pré-processeur
#define __STRUCT_PILE_H__ // permet d'éviter l'inclusion mutliple

// Structure de type pile: 
// Ce fichier possède l'ensemble des prototypes des fonctions travaillant sur TAD Pile
/*La structure de donnée de type pile est composé d'un element 
et pointe toujours vers un autre élement qui lui précéde 
*/ 


// Explication: la structure pile 
typedef struct noeud{
	int donnee; // 
	struct noeud *prochain; 
}*pile;

/* pile_vide
input: une pile p
output: une pille vide
retourne 0 si l'allocation dynamique à echoué: 
retourne 1 si l'allocation réussi
*/
pile pile_vide();

/* est_pile_vide
input: une pile p
output: 1 ou 0
retourne si la pile est vide ou pas 
*/
int est_pile_vide(pile);

/* push()
input: un element est une pile
output:rien
*/

void push(pile*,int);

/* pop()
input: 
output:retourne l'element du maillon qui a été depop
*/
int pop(pile*);

/* destroy()
input: une pile
output: rien 
effet de bord: destruction de l'ensemble des elements d'une pile
*/

void destroy(pile);
void rec_destroy(pile);

int tete_pile(pile*);

//void affiche_pile(pile*);

#endif






