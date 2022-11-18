#include "election.h"
#include <stdio.h>
#include  <string.h>
int main()
{
  GestionElection E1={12653,"hftht",50000,10,10,12,20000},E2={12565,"benarous",50500,10,11,5,20001},E3;

  /*int x=ajouter_election("election.txt",E1);
 

  if(x==1)
    printf("\n ajouter d'election avec succes");
  else 
        printf("\n echec d'ajout");


    /*x=modifier_election("election.txt",E2,12653);

  if(x==1)
    printf("\n modification d'election avec succes");
  else 
        printf("\n echec modification");*/


     /*x=supprimer_election("election.txt",12653);

  if(x==1)
    printf("\n suppression d'election avec succes");
  else 
        printf("\n echec ");*/
 E3=chercher_election(3,"election.txt");
 if(E3.id==-1)
     printf("introuvable");
 else printf("\n id existe");

return 0;
}



