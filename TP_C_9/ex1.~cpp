#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int nombre[3];

void Saisi(){
        char nombre_car[10];
        int i=0;
        for(i=0;i<3;i++){
                printf("Veuillez Saisir le nombre %d : ",i+1);
                fgets(nombre_car,8,stdin);
                nombre[i]=atoi(nombre_car);
        }
}

int PlusGrand(int P_nombre[]){
        int i=0;
        int max=0;
        do{
                if(P_nombre[i]>max){
                        max=P_nombre[i];
                }
                i++;
        }while(i<3);
        return max;
}



int main(int argc, char** argv) {
        int max=0;
        Saisi();
        max=PlusGrand(nombre);
        printf("Le maximum des 3 nombres est : %d",max);

	getch();
}

 
