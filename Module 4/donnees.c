#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

int comptageLigne()
{
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
    return compteur;
}
