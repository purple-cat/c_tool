#include "int_tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//########## ARRAY WORKS ##########

void int_print_me(int tab[],int taille)
{
  for (int i = 0; i < taille; i++) {
    printf("tab[%d] vaut %d\n",i,tab[i]);
  }
}

int int_rng(int sup, int inf)
{
  int rng = (rand()%(sup-inf+1))+inf;
  return rng;
}

void int_rng_values(int tab[],int taille,int sup, int inf)
{
  for (int i = 0; i < taille; i++) {
    tab[i]=int_rng(sup,inf);
  }
}

//########## SORTS ##########

int max(int tab[] , int taille)
{
  int indice_max=0;
  for (int i = 0; i < taille; i++) {
    if (tab[i]>tab[indice_max]) {
      indice_max=i;
    }
  }
  return indice_max;
}

void echange(int tab[],int i, int j)
{
  int tmp=tab[i]; tab[i]=tab[j]; tab[j]=tmp;
}

void tri_selection(int tab[], int taille)
{
    while(taille>1) {
    int indice_max=max(tab,taille);
    echange(tab,indice_max,taille-1);
    taille--;
  }
}
