#include "BureauVote.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
Bureau b1={001, 20, 124532,"esprit/salle 03"} ,b2={002, 10,154832,"esprit/salle 12"};

Bureau b= chercher_bv(002,"ListeBV.txt");
if(b.id_bureau==-1)
printf("inexistant");
else
printf("%d %d %d %s",&b.id_bureau,&b.capacite,&b.id_agent,&b.adresse);

}

