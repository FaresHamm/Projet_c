#include <stdio.h>
#include <string.h>
#include "Utilisateur.h"

int main()
{
    Utilisateur p1= {500,"Fares","Hammami","azerty",0,0,4,23,01,2001},p2= {500,"Fares","Hammami","azerty",1,0,4,23,01,2001},p3;
    int x=ajouter("Utilisateur.txt", p1);
    if(x==1)
        printf("\najout de point avec succés");
    else
        printf("\nechec ajout");
    x=modifier("point.txt",1,p2 );

    if(x==1)
        printf("\nModification de point avec succés");
    else
        printf("\nechec Modification");
    x=supprimer("point.txt",1 );
    if(x==1)
        printf("\nSuppression de point avec succés");
    else
        printf("\nechec Suppression");
    p3=chercher("point.txt",3 );
    if(p3.id_user==-1)
        printf("introuvable");
    return 0;
}
