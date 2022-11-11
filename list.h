#ifndef list_H_INCLUDED
#define list_H_INCLUDED
#include <stdio.h>
typedef struct
{
    char orientation [20];
    int id, id_tete,id1,id2,id3;
    int nbr_vote=0;
} list;

int ajouter(char *, list );
int modifier( char *, int, list );
int supprimer(char *, int );
list chercher(char *, int);
void afffiche(char *,int);
void vote(char *,int);
#endif // list_H_INCLUDED
