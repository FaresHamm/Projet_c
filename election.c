#include "election.h"
#include <stdio.h>
#include <stdlib.h>

int ajouter(char * filename, Election e )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %d %s %d\n", e.date.jj,e.date.mm,e.date.aa, e.nbre_population, e.municipalite, e.nbre_des_conseillers);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, char mun[20], Election nouv )
{
    int tr=0;
    Election e;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %d\n",e.date.jj,e.date.mm,e.date.aa, e.nbre_population, e.municipalite, e.nbre_des_conseillers)!=EOF)
        {
       	    if(strcmp(e.municipalite,mun)==0)
            {
                fprintf(f2,"%d %d %d %d %s %d\n", nouv.date.jj,nouv.date.mm,nouv.date.aa, nouv.nbre_population, nouv.municipalite, nouv.nbre_des_conseillers);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %s %d\n",  e.date.jj,e.date.mm,e.date.aa, e.nbre_population, e.municipalite, e.nbre_des_conseillers);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, char mun[20])
{
    int tr=0;
    Election e;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d  %s %d\n", e.date.jj,e.date.mm,e.date.aa, e.nbre_population, e.municipalite, e.nbre_des_conseillers)!=EOF)
        {
            if(strcmp(e.municipalite,mun)==0)
                tr=1;
            else
                fprintf(f2,"%d %d %d %d %s %d\n", e.date.jj,e.date.mm,e.date.aa, e.nbre_population, e.municipalite, e.nbre_des_conseillers);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
Election chercher(char * filename, char mun[20])
{
    Election e;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %d %d %s %d\n",e.date.jj,e.date.mm,r.date.aa,e.nbre_population, e.municipalite, e.nbre_des_conseillers)!=EOF)
        {
            if(strcmp(e.municipalite,mun)==0)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        e.municipalite="Aucun";
    return e;

}
