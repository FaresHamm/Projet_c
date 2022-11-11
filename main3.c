#include <stdio.h>
#include <string.h>
#include"list.h"

int main()
{
    list l1= {100,"gauche",101,102,103,104},l2= {200,"droit",201,202,203,204},l3;
    int x=ajouter("list.txt", l1);
    /*
    if(x==1)
        printf("\n ajout d une list  avec succés");
    else printf("\nechec ajout");
        */
    x=modifier("list.txt",100,l2 );

    if(x==1)
        printf("\nModification de list  avec succés");
    else printf("\nechec Modification");
    x=supprimer("list.txt",200 );
    if(x==1)
        printf("\nSuppression de list avec succés");
    else printf("\nechec Suppression");
    l3=chercher("list.txt",200 );
    if(l3.id==-1)
        printf("introuvable");
    affiche("list.txt",100);
    vote("list.txt",200);
    return 0;
}
