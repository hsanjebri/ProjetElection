#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED
#include <stdio.h>
typedef struct
{
    int jour;
    int mois;
    int annee;
}Date;

typedef struct
{
    int id;
    char municipalite[50];
    int nb_habitant;
    int nb_conseille;
    Date date_election;
}GestionElection;

int ajouter_election(char *filename,GestionElection E);
int modifier_election(char * filename,GestionElection nouv,int id);
int supprimer_election(char *filename,int id);
GestionElection chercher_election(int id,char *filename);
#endif
 
