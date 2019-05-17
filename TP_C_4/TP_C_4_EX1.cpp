#include <stdio.h>
#include <conio.h>

void main()
{
        int nb_note;
        float note,somme,moyenne;
        int i;
        somme=0;
        do{
                printf("Combien de notes : ");
                scanf("%d",&nb_note);
        }while(nb_note<=0);

        for(i=1;i<=nb_note;i++){
        printf("Note %d :",i);
        scanf("%f",&note);
        somme=somme+note;
        }
        moyenne=somme/nb_note;
        printf("Moyenne de ces %d notes : %5.2f",nb_note,moyenne);
        getch();
}


