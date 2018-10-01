#ifndef __TAB_H__ // Directive du pré-processeur
#define __TAB_H__ // permet d'éviter l'inclusion mutliple

// ##### SOME ARRAY FUNCTIONS #####
/*
Dans ce fichier on écrit les prototypes des fonctions
Ce fichier contient un ensemble de fonction qui permettent de travailler
sur des tableaux
*/


/* print_me
input: Un tableau de int et sa taille;
output: Rien
Affchage: l'ensemble des valeurs de ce tableau mis en forme
 */
void int_print_me(int[],int);

/* rng
input: borne supérrieur et borne inférrieur
output: une valeur random entre deux bornes inclus
 */
int int_rng(int, int);

/* rng_values
input: un tableau de int, et sa taille:
output: Un tableau contenant des valeurs random
Effet de bord: Remplie un tableau de valeurs random
*/
void int_rng_values(int[],int,int,int);

// ################## SOME SORTS FUNCTIONS ##################


/* max
input:un tableau d'entier et la taille de celui ci
output: retourne le plus grand entier de ce tableau;
*/

int max(int[],int);

/* echange
input:un tableau d'entier et deux indice i et j
effet de bord: échnage les valeurs t[i] et t[j];
*/
void echange(int[],int,int);

/* tri_selection
input: un tableau d'entier et sa taille;
efft de bord: un tableau d'entier trié
*/

void tri_selection(int[], int);

/* tri_selection
input: un tableau d'entier et sa taille;
efft de bord: un tableau d'entier trié
il s'agit d'une version différente du tri par selection, voir cahier pour pseudo code
*/

void tri_selectionv2(int[], int);


#endif
