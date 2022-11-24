#include <stdio.h>
#include <string.h>
#include "utilisateur.h"

int main()
{
	Utilisateur p1,p2,p3;
	p1.id_user=1;
	p1.CIN=1212;
    	p1.prenom[20]="Fares";
	p1.nom[20]="Hammami";
	p1.mdp[20]="azerty";
	p1.genre="h";
	p1.vote=0;
	p1.id_bv=4;
	p1.role=0;
	p1.date.jj=23;
	p1.date.mm=1;
	p1.date.aa=2001;
	p2.id_user=500;
	p2.CIN=1212;
    	p2.prenom[20]="Fares";
	p2.nom[20]="Hammami";
	p2.mdp[20]="azerty";
	p2.genre="h";
	p2.vote=1;
	p2.id_bv=4;
	p2.role=0;
	p2.date.jj=23;
	p2.date.mm=1;
	p2.date.aa=2001;
    int x=ajouter("Utilisateur.txt", p1);
    if(x==1)
        printf("\najout d'un utilisateur avec succés");
    else
        printf("\nechec utilisateur");
    x=modifier("utilsateur.txt",1,p2 );

    if(x==1)
        printf("\nModification d'un utilisateur avec succés");
    else
        printf("\nechec Modification");
    x=supprimer("utilisateur.txt",1 );
    if(x==1)
        printf("\nSuppression d'un utilisateur avec succés");
    else
        printf("\nechec Suppression");
    p3=chercher("point.txt",3 );
    if(p3.id_user==-1)
        printf("introuvable");
    return 0;
}
