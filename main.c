#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"

int main()
{
  int a_trouver = generer_hasard();
  int proposition;
  int test = 0;

  while (test != 1)
  {
   proposition = entrer_nombre();
   test=afficher_comparaison(proposition, a_trouver);
  }
printf("modif dans labas\n");
  printf("trouvé !\n");
return 0;
}
