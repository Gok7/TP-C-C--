#include <conio.h>
#include <stdio.h>


void main(){

float heures,minutes,secondes;

float resultat=0;

heures=0,minutes=0,secondes=0;
printf("Veuillez entrez un temps en heures-minutes-secondes : ");
scanf("%f%f%f",&heures,&minutes,&secondes);
resultat=(heures*3600)+(minutes*60)+secondes;
printf("printf %.2f heures %.2f minutes %.2f secondes \n= %.0f secondes",heures,minutes,secondes,resultat);
getch();
}

