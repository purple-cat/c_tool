#ifndef __STRUCT_FILE_H__
#define __STRUCT_FILE_H__
// structure de type file
// ce fichier possède l'ensemble des prototypes des fonctions travaillant sur le TAD file

//la structure de donnée est composé d'un element et pointe toujours vers l'élément qui lui précéde

typedef struct noeudf
{
    int donnee;
    struct noeudf* suivant;
}*file;


/*
 Retourne une file vide: NULL
 */
file file_vide();

/*
 Test si une file est vide ou pas
 Input : un pointeur vers une structure file.
 Output: retourne 1 si la file est vide
 retourne 0 si la file n'est pas vide
 */
int est_vilde_vide();

/*
 input: un pointeur vers un pointeur de structure de type file
 Ajoute un élément à la file.
 */

void enfiler(file *,int);

/*
 input : un element de type file.
 output : retourne l'élément en tete de file.
 */
int tete_file(file *);

#endif
