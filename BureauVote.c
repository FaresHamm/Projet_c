#include "BureauVote.h"
#include<stdio.h>

int ajouter_bv(Bureau b , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %s\n",b.id_bureau,b.capacite,b.id_agent,b.adresse);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier_bv(int id_bureau, Bureau nouv, char * filename)
{
Bureau b;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %s",&b.id_bureau,&b.capacite,&b.id_agent,&b.adresse)!=EOF)
{
if(b.id_bureau!=id_bureau)
        fprintf(f2,"%d %d %d %s",&b.id_bureau,&b.capacite,&b.id_agent,&b.adresse);
else

  fprintf(f2,"%d %d %d %s",&nouv.id_bureau,&nouv.capacite,&nouv.id_agent,&nouv.adresse);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }

}

int supprimer_bv(int id_bureau, char * filename)
{
Bureau b;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %s",&b.id_bureau,&b.capacite,&b.id_agent,&b.adresse)!=EOF)
{
if(b.id_bureau!=id_bureau)
        fprintf(f2,"%d %d %d %s",&b.id_bureau,&b.capacite,&b.id_agent,&b.adresse);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

Bureau chercher_bv(int id_bureau, char * filename)
{
Bureau b; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %d %d %s",&b.id_bureau,&b.capacite,&b.id_agent,&b.adresse)!=EOF && tr==0)
{if(id_bureau==b.id_bureau)
tr=1;
}
}
if(tr==0)
b.id_bureau=-1;
return b;

}
