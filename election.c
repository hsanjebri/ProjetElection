#include "election.h"
#include <stdio.h>

int ajouter_election(char *filename,GestionElection E)
{
    FILE *f=fopen(filename,"a");
    if(f!=NULL)
     {
      fprintf(f,"%d %s %d %d %d %d %d \n ",E.id,E.municipalite,E.nb_habitant,E.nb_conseille,
                        E.date_election.jour,E.date_election.mois,E.date_election.annee);

       fclose(f);
        return 1;
     }
  else return 0;
}
int modifier_election(char *filename,GestionElection nouv,int id)
{
   GestionElection E;
   int tr=0;
   FILE *f=fopen(filename,"r");
   FILE *f2=fopen("nouv.txt","w");
   if(f!=NULL && f2!=NULL)
 {

       while(fscanf(f,"%d %s %d %d %d %d %d\n",&E.id,E.municipalite,&E.nb_habitant,&E.nb_conseille,
                        &E.date_election.jour,&E.date_election.mois,&E.date_election.annee)!=EOF)
      {
         if(E.id==id){
           fprintf(f2,"%d %s %d %d %d %d %d\n",nouv.id,nouv.municipalite,nouv.nb_habitant,nouv.nb_conseille,
                        nouv.date_election.jour,nouv.date_election.mois,nouv.date_election.annee);
           
              tr=1;}
            
          else
           fprintf(f2,"%d %s %d %d %d %d %d\n",E.id,E.municipalite,E.nb_habitant,E.nb_conseille,
                        E.date_election.jour,E.date_election.mois,E.date_election.annee);
     }
 }
     fclose(f);
     fclose(f2);
     remove(filename);
     rename("nouv.txt",filename);
     return tr;
    
}

int supprimer_election(char *filename,int id)
{
  int tr=0;
  GestionElection E;
   FILE *f=fopen(filename,"r");
   FILE *f2=fopen("nouv.txt","w");
if(f2==NULL)
printf("prob d'ov");
   if((f!=NULL) && (f2!=NULL))
 {

       while(fscanf(f,"%d %s %d %d %d %d %d\n",&E.id,E.municipalite,&E.nb_habitant,&E.nb_conseille,
                        &E.date_election.jour,&E.date_election.mois,&E.date_election.annee)!=EOF)
          {
            if (E.id==id)
                 tr=1;  
                
             else 
                 
              fprintf(f2,"%d %s %d %d %d %d %d\n",E.id,E.municipalite,E.nb_habitant,E.nb_conseille,
                        E.date_election.jour,E.date_election.mois,E.date_election.annee);
             
         }
 }
   fclose(f);
   fclose(f2);
   remove(filename);
   rename("nouv.txt",filename);
   return tr;
}

GestionElection chercher_election(int id ,char * filename)
{
    GestionElection E;
    int tr=0;
    FILE *f=fopen(filename,"r");
   if(f!=NULL)
     {
       while(tr==0 && fscanf(f,"%d %s %d %d %d %d %d\n",&E.id,E.municipalite,&E.nb_habitant,&E.nb_conseille,
                        &E.date_election.jour,&E.date_election.mois,&E.date_election.annee)!=EOF)
          {
            if (E.id==id)
                 tr=1;
          }
      }
   fclose(f);
   if(tr==0)
     E.id=-1;
   return E;
}

  

