#include <stdio.h>
#include <conio.h>
#include <windows.h>

float somme(){
        float resultat;
        float a,b;
        window(24,15,56,17);
        textbackground(BLACK);
        clrscr();
        textcolor(GREEN);
        printf("Veuillez saisir le nombre 1 : ");
        scanf("%f",&a);
        printf("Veuillez saisir le nombre 2 : ");
        scanf("%f",&b);
        resultat=a+b;
        return resultat;
}

void MENU(){
        float resultat;
        int choix=0;
        textbackground(WHITE);
        clrscr();
        window(24,7,56,17);
        textbackground(BLACK);
        clrscr();
        textcolor(GREEN);

        cprintf("\
---------------------------------\
 TRAITEMENT DE 2 VALEURS ENTIERES\
---------------------------------");
gotoxy(14,4);
cprintf("1-SOMME");
gotoxy(14,5);
cprintf("2-DIFFERENCE");
gotoxy(14,6);
cprintf("3-PLUSGRAND");
gotoxy(14,7);
cprintf("4-ARRET");
gotoxy(14,10);

scanf("%d",&choix);

        switch(choix){
                case 1 : resultat=somme();
                        printf("resultat= %f",resultat);
                break;
        default:printf("erreur");


        }
}

void main(){

        MENU();
        getch();
}



