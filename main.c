#include "election.h"
#include <stdio.h>
#include  <string.h>
int main()
{
  GestionElection E1={12653,"hftht",50000,10,10,12,20000},E2={12565,"benarous",50500,10,11,5,20001};

   int x=ajouter_election("election.txt",E1);

  /*if(x==1)
    printf("\n ajouter d'election avec succes");
  else 
        printf("\n echec d'ajout");*/


   x=modifier_election("election.txt",E2,12653);

  if(x==1)
    printf("\n modification d'election avec succes");
  else 
        printf("\n echec modification");


   /*x=supprimer_election("election.txt",12565);

  if(x==1)
    printf("\n suppression d'election avec succes");
  else 
        printf("\n echec ");*/

return 0;
}



