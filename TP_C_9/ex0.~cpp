#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<malloc.h>
#define PI 3.141592654

float Surface_cercle(float P_rayon){

       return (PI*pow(P_rayon,2));
}

float Saisi(){
        float rayon=0;
        printf("Saisir le rayon du cercle (en cm): ");
        flushall();
        scanf("%f",&rayon);
        return rayon;
}

void Affiche(float P_rayon,float P_surface){
        printf("Le rayon est de %.2f cm, la surface vaut : %.2f cm \n",P_rayon,P_surface);
}
void main(){
          float rayon,Surface;
          rayon=Saisi();
          Surface=Surface_cercle(rayon);
          Affiche(rayon,Surface);
getch();
}




