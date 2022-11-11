#ifndef BUREAUVOTE_H_INCLUDED
#define BUREAUVOTE_H_INCLUDED

typedef struct
{
int id_bureau, capacite, id_agent;
char adresse [20];
}Bureau;

int ajouter_bv(Bureau b , char filename []);
int modifier_bv(int id_bureau, Bureau nouv, char * filename);
int supprimer_bv(int id_bureau, char * filename);
Bureau chercher_bv(int id_bureau, char * filename);

#endif // BUREAUVOTE_H_INCLUDED
