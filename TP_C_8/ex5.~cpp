#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 void main(){
         typedef struct{
                 int jour;
                 int mois;
                 int an;
        }S_DATE;
                
        typedef struct{
                char nom[15];
                char ville[15];
        }S_ADRESSE;

        union U_VALEUR{
                S_DATE date;
                S_ADRESSE adresse;
        }enreg;

        int *jour=&enreg.date.jour;
        int *mois=&enreg.date.mois;
        int *an=&enreg.date.an;
        strcpy(enreg.adresse.nom,"DUPONT MORETTI");
        strcpy(enreg.adresse.ville,"PARIS");
        printf("%d\n",sizeof(enreg));
        enreg.date.jour=22;
        enreg.date.mois=4;
        enreg.date.an=92;
        printf("jour : %d, mois : %d, an : %d \n",*jour,*mois,*an);
getch();
}
