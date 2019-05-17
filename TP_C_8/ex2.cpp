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
        T_ENREG *ptr;
 void main(){

        ptr=tableau_personne ;
        int i=0;
        for(i=0;i<3;i++){
        printf("Veuillez saisir le nom n° %d : ",i+1);
        fgets(ptr->nom,15,stdin);
        flushall();
        printf("le prenom : ");
        fgets(ptr->prenom,15,stdin);
        flushall();
        printf("l'age : ");
        scanf("%d",&ptr->age);
        flushall();
        ptr++;
        }
         ptr=tableau_personne ;
        for(i=0;i<3;i++){
                printf("personne : %s %s ,%d ans \n",ptr->nom,ptr->prenom,ptr->age);
                ptr++;
        }
        printf("TAILLE : %d\n",sizeof(T_ENREG));
        printf("%d\n",sizeof(tableau_personne));
        printf("%d\n",sizeof(ptr));

getch();
}
