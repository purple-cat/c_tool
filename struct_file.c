#include "struct_file.h"
#include <stdio.h>
#include <stdlib.h>

file file_vide() {return NULL;}

int est_file_vide(file f){return f==NULL;}

void enfiler(file *f,int donnee){
    file new = malloc (sizeof(file));
    if (new==NULL){printf("Erreur d'allocation fin."); exit(0);}
    //Remplissage de la structure.
    new->donnee=donnee;
    new->suivant=NULL;
    
    if (*f==NULL) {
        printf("la file est vide \n");
        *f=new;
    } else
    {
        file temp=*f;
        while (temp->suivant != NULL) {
            temp=temp->suivant;
        }
        temp->suivant=new;
        
    }
    
}

int tete_file(file *f){
    if (!est_file_vide(*f)){
        int donnee = (*f)->donnee;
        //printf("Valeur en tete de file : %d \n",donnee);
        return donnee;
    }else {
        //printf("La file est vide");
        exit(0);
    }
}

int queue_file(file *f){
    if (!est_file_vide(*f)) {
        file temp=*f;
        while (temp->suivant!=NULL) {
            temp=temp->suivant;
        }
        int donnee=temp->donnee;
        //printf("Queue de la file : %d \n",donnee);
        return donnee;
    } else {
        printf("La vide est vide: ERREUR \n"); exit(0);
    }
    
}

int nb_element_file(file *f){
    int count = 0;
    file temp = *f;
    while (temp != NULL ){
        temp=temp->suivant; count ++;
    }
    return count;
}

void print_me(file *f){
    file temp = *f;
    while (temp->suivant != NULL) {
        printf("Element :%d \n",temp->donnee);
        temp=temp->suivant;
    }
}
