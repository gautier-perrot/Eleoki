#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

typedef struct ligne ligne;
struct ligne
{
    int pouls;
    int temps;
};

FILE* fichier = NULL;
#endif // DONNEES_H_INCLUDED
