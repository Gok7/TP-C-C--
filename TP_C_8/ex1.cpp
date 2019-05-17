#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(push,1)
        typedef struct{
                char nom[15];
                char prenom[15];
                int age;
        }T_ENREG;
#pragma pack(pop)

        T_ENREG tableau_personne[10];

void Saisi(){
        int i=0;
for(i=0;i<1;i++){
        printf("Veuillez saisir le nom n° %d : ",i+1);
        fgets(tableau_personne[i].nom,15,stdin);
        flushall();
        printf("le prenom : ");
        fgets(tableau_personne[i].prenom,15,stdin);
        flushall();
        printf("l'age : ");
        scanf("%d",&tableau_personne[i].age);
        flushall();
        }
}

void Affiche(){
        int i=0;
for(i=0;i<3;i++){
printf("personne : %s %s ,%d ans \n",tableau_personne[i].nom,tableau_personne[i].prenom,tableau_personne[i].age);
}
}

Affiche_taille(){
       // printf("%d",sizeof(struct{T_ENREG}));
        printf("%d\n",sizeof(T_ENREG));
        printf("%d",sizeof(tableau_personne));
        }
void main(){
        Affiche_taille();

getch();
}
