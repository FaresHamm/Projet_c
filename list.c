#include "list.h"

int ajouter(char * filename, list l )
{
    int i;    	
    FILE * f=fopen(filenamee, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %d %d %d %d\n",l.id,l.orientation,l.id_tet,l.id1,l.id2,l.id2);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, list  nouv )
{
    int tr=0;
    point p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %d \n",&l.id,&l.orientation,&l.id_tete,&l.id1,l.id2,l.id3)!=EOF)
        {
            if(l.id== id)
            {
                fprintf(f2,"%d %s %d %d %d %d\n",nouv.id,nouv.orientation,nouv.id_tete,nouv.id1,nouv.id2;nouv.id3);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %d %d %d %d\n",l.id,l.orientation,l.id_tete,l.id1,l.id2,l.id3);

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
    point p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %d\n",&l.id,l.orientation,&l.id_tete,&l.id1,&l.id2,&l.id3)!=EOF)
        {
            if(p.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %d %d\n",l.id,l.orientation,l.id_tete,l.id1,l.id2,l.id3);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
list chercher(char * filename, int id)
{
    list l;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %d %d %d %d \n",&l.id,l.orientation,&l.id_tete,&l.id1;&l.id2,&l.id3)!=EOF)
        {
            if(p.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        p.id=-1;
    return p;

}
void vote (char * filename, int id  ){

FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %d \n",&l.id,&l.orientation,l.id_tete,l.id1,l.id2,l.id2);
        {
            if(l.id== id)
            {
               &l.nbr_vote++;
		fprintf(f2,"%d %s %d %d %d %d\n",l.id,l.orientation,l.id_tete,l.id1,l.id2,l.id3);
}
fclose(f);
fclose(f2);
remove(filename);
rename("nouv.txt", filename);
}

void affiche( char *filename,int id )
f=fopen (filename, "r");
if (f!!=NULL)
	
    {
        while(fscanf(f,"%d %s %d %d %d %d \n",&l.id,&l.orientatio$
        {
            if(l.id== id)
		{printf("%d %s %d %d",l.id,l.orientation,l.id_tete,l.nbr_vote);
}
fclose(f);
}
