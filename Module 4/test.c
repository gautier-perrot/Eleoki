#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

int main()
{

    /*char h[50] = "";*/

    fichier = fopen("pouls.csv", "r");

    /*if (fichier != NULL)
    {
          while (fgets(h,50,fichier) != NULL)
          {
              printf("%s",h);
          }
          fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }

    return 0;*/
    char curseur;
    int compteur = 0;
    while(curseur != EOF)
    {
        curseur = fgetc(fichier);
        if (curseur == '\n')
        {
            compteur = compteur +1;
        }
    }
    printf("%d",compteur);
fclose(fichier);
}
