//---------------------------------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main ()
{
int nombre,compteur,premier;

        while(1){
        do{
        printf ("Donner un entier superieur a 2 : ");
        scanf ("%d", &nombre);
        }
        while (nombre<=2);

        compteur = 2;
        do
        {
        premier=nombre%compteur;    // premier prend 0 si le reste vaut 0
        compteur++;

        } while ((premier!=0) && (compteur<= sqrt(nombre)));

        if (premier !=0) {printf ("%d est premier\n", nombre);}
        else { printf ("%d n'est pas premier\n", nombre);     }
        }
        getch();
}

//---------------------------------------------------------------------------

