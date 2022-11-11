#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <stdio.h>
typedef struct
{
   int jj;
   int mm;
   int aa;
}Date;
typedef struct
{
    Date date;
    int nbre_population;
    char municipalite[20];
    int nbre_de_conseillers;
}Election;

int ajouter(char *, Election );
int modifier( char *, char, Election );
int supprimer(char *, int);
void afficher (char *, int);
Election chercher(char *, int);

#endif // POINT_H_INCLUDED
