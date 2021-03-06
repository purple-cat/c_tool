#include "int_tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//########## OTHER FUNCTIONS ##########

unsigned long factorielle(int n)
{
  //Gérez les erreurs:
  if (n<0) {exit(0);}
  if (n==0||n==1){return 1;}

  return n*factorielle(n-1);
}

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
  for (int i = 1; i < taille; i++) {
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


//########## SELECT_SORT ##########

void tri_selection(int tab[], int taille)
{
    while(taille>1) {
    int indice_max=max(tab,taille);
    echange(tab,indice_max,taille-1);
    taille--;
  }
}

void tri_selectionv2(int tab[], int taille)
{
	for(int i=0;i<taille;i++)
  {
    int jmin=i; 
    for (int j = i+1; j < taille; ++j)
    {
      if(tab[j]<tab[jmin]) {jmin=j;}
      echange(tab,i,jmin);   
    }
  }
}
void tri_selection_rec(int tab[], int taille)
{
  //Condition d'arret 
  if(taille<=1){return;}
  echange(tab,taille-1,max(tab,taille));
  tri_selection_rec(tab,taille-1);
}

void tri_insertion(int tab[], int taille)
{
  for (int i = 1; i < taille; ++i)
  {
    int x=tab[i];
    int j=i-1;
    while(j>=0 && tab[j]>x)
    {
      tab[j+1]=tab[j];
      j--;
    }
    tab[j+1]=x;
  }
}

void tri_insertionv2(int tab[], int taille)
{
  for (int i = 1; i < taille; ++i)
  {
    int cle = tab[i];
    int j = i-1;
    while(j>=0 && tab[j]>cle)
    {
      echange(tab,j,j+1);
      j--;
    }
    //tab[j+1]=cle;
  }
}



