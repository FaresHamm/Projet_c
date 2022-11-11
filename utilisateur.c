#include "utilisateur.h"
#include <stdio.h>
#include <stdlib.h>

int ajouter(char * filename, Utilisateur p )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %d %d %d %d %d %d\n",&p.id_user,p.nom,p.prenom,p.mdp,&p.vote,&p.role,&p.id_bv,&p.date.jj,&p.date.mm,&p.date.aa);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, Utilisateur nouv )
{
    int tr=0;
    Utilisateur p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %d %d %d %d %d %d\n",&p.id_user,p.nom,p.prenom,p.mdp,&p.vote,&p.role,&p.id_bv,&p.date.jj,&p.date.mm,&p.date.aa)!=EOF)
        {
            if(p.id_user== id)
            {
                fprintf(f2,"%d %s %s %s %d %d %d %d %d %d\n",&nouv.id_user,nouv.nom,nouv.prenom,nouv.mdp,&nouv.vote,&nouv.role,&nouv.id_bv,&nouv.date.jj,&nouv.date.mm,&nouv.date.aa);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s %s %d %d %d %d %d %d\n",&p.id_user,p.nom,p.prenom,p.mdp,&p.vote,&p.role,&p.id_bv,&p.date.jj,&p.date.mm,&p.date.aa);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
    Utilisateur p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d \n",&p.id_user)!=EOF)
        {
            if(p.id_user==id)
                tr=1;
            else
                fprintf(f2,"%d %s %s %s %d %d %d %d %d %d\n",&p.id_user,p.nom,p.prenom,p.mdp,&p.vote,&p.role,&p.id_bv,&p.date.jj,&p.date.mm,&p.date.aa);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
Utilisateur chercher(char * filename, int id)
{
    Utilisateur p;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d\n",&p.id_user)!=EOF)
        {
            if(p.id_user== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        p.id_user=-1;
    return p;

}
