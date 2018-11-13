#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void menu()
{
    int choixMenu;
    int choixTri;
    int choixRecherche;
    int nbligne=comptageLigne();
    printf("Que voulez-vous faire ? \n\n   1 : Afficher les donnees \n   2 : Trier les donnees par ordre croissant ou decroissant \n   3 : Rechercher un pouls a un instant T \n   4 : Afficher le pouls moyen entre deux instants \n   5 : Afficher le nombre de valeurs \n   6 : Rechercher le maximum ou le minimum \n   0 : Quitter\n\n");
    scanf("%d",&choixMenu);
    switch (choixMenu)
    {
        case 1:
            toutAfficher();
            break;

        case 2:
            scanf("%d",&choixTri);
            switch(choixTri)
            {
                case 1:
                    trierPoulsCroiss();
                    break;

                case 2:
                    trierTempsCroiss();
                    break;

                case 3:
                    trierPoulsDecroiss();
                    break;

                case 4:
                    trierTempsDecroiss();
                    break;

                default:
                    printf("Choix invalide, recommencez.\n\n");
                    break;
            }
            break;

        case 3:
            recherche();
            break;

        case 4:
            moyenne();
            break;

        case 5:
            nbdonnees();
            break;

        case 6:
            scanf("%d",&choixRecherche);
            switch(choixRecherche)
            {
                case 1:
                    trierPoulsCroiss();
                    break;

                case 2:
                    trierTempsCroiss();
                    break;

                default:
                    printf("Choix invalide, recommencez.\n\n");
                    break;
              }

            break;

        case 0:
            printf("Au revoir.\n\n")
            return 0;

        default:
            printf("Choix invalide, recommencez.\n\n");
            break;

    }
    menu();
}
