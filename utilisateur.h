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
    int CIN, id_bv, vote,id_user,role;
    Date date;
    char nom[20],prenom[20],mdp[20];
    char genre;
}Utilisateur;

int ajouter(char *, Utilisateur );
int modifier( char *, int, Utilisateur );
int supprimer(char *, int);
Utilisateur chercher(char *, int);

#endif // POINT_H_INCLUDED
