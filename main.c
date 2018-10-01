#include "int_tab.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int tab[5];
  int_rng_values(tab,5,50,0);
  int_print_me(tab,5);
/*
  printf("Utilisation du tri par selection\n");
  tri_selection(tab,5);
  int_print_me(tab,5);
*/

  printf("Utilisation du tri par selection REC\n");
  tri_selection(tab,5);
  int_print_me(tab,5);





  return 0;
}
