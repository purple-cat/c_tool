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

file file_vide();

int est_vilde_vide();







#endif
