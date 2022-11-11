#include <stdio.h>
#include <string.h>
#include "Election.h"

int main()
{
    Election p1= {15,10,2022,20000,"Ariana",5},p2= {20,12,2022,20000,"Ariana",10},p3;
    int x=ajouter("Election.txt", p1);
    if(x==1)
        printf("\najout d'une election avec succés");
    else
        printf("\nechec ajout");
    x=modifier("Election.txt",1,p2 );

    if(x==1)
        printf("\nModification d'une Election avec succés");
    else
        printf("\nechec Modification");
    x=supprimer("Election.txt",1 );
    if(x==1)
        printf("\nSuppression d'Election avec succés");
    else
        printf("\nechec Suppression");
    p3=chercher("Election.txt",3 );
    if(p3.municipalité==NULL)
        printf("introuvable");
    return 0;
}
