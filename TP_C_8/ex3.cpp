#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
        typedef struct{
                 int jour;
                 int mois;
                 int an;
        }S_DATE;
                
        typedef struct{
                char nom[15];
                char prenom[15];
                int age;
                S_DATE date;
        }T_ENREG;

        T_ENREG tableau_personne[10];
        
 void main(){
        flushall();
        printf("Veuillez saisir le jour : ");
        scanf("%d",&tableau_personne[0].date.jour);
        flushall();
        printf("Veuillez saisir le mois : ");
        scanf("%d",&tableau_personne[0].date.mois);
        flushall();
        printf("Veuillez saisir l'an : ");
        scanf("%d",&tableau_personne[0].date.an);
        flushall();
        printf("%d ",tableau_personne[0].date.jour);
        printf("%d ",tableau_personne[0].date.mois);
        printf("%d ",tableau_personne[0].date.an);
getch();
} 
