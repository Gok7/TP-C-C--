     /*******************************************************************************
* NOM DU PROGRAMME : TP2E1.CPP
* SAUVEGARDE : Z:\TP_C\TP_C_2\
* AUTEUR : GENAUDET
* DESCRIPTION : Operations sur les types
* DATE : 13 septembre 2012
*******************************************************************************/

#include <conio.h>
#include <stdio.h>
void main()
{
        char c1='\x22';
        char c2='\xfe';
        int n;
        long q;
        float x;
        int p;

        n=10;
        q=2;
        x=1.75;
        p=4;

        // Exercice 1
        printf ("n+q = %ld  (long)(code format %%ld)\n", n+q);
        printf ("n+x = %f  (float)(code format %%f)\n", n+x);
        printf ("n%%p*q = %ld  (long)(code format %%ld)\n", n%p*q);
        printf ("n%% -p*n = %d  (int)(code format %%d)\n\n\n", n%-p*n);

        // Exercice 2
        printf ("c1 en decimal : %d\n",c1);
        printf ("c1 en hexa : %x\n",c1);
        printf ("c2 en decimal : %d\n",c2);
        printf ("c2 en hexa : %x\n\n",c2);

        printf ("2*c1 en decimal : %d\n", 2*c1);
        printf ("2*c1 en hexa : %x\n", 2*c1);
        printf ("2*c2 en decimal : %d\n", 2*c2);
        printf ("2*c2 en hexa : %x\n", 2*c2);
        printf ("c1+c2 en decimal : %d\n", c1+c2);
        printf ("c1+c2 en hexa : %x\n\n\n", c1+c2);


        // Exercice 3
        printf ("c1+x = %f  (float)(code format %%f)\n\n\n", c1+x);

        // Exercice 4
        printf ("n<p = %d (int)\n",n<p);
        printf ("n>=p = %d (int)\n",n>=p);
        printf ("n>q = %d\n (int)",n>q);
        printf ("q+3 *(n>q) = %ld (long)\n",q+3 *(n>q));
        printf ("c1>c2 = %d (int)\n",c1>c2);
        printf ("c1>n = %d (int)\n",c1>n);
        printf ("(c2>n)+(c1<p) = %d (int)\n\n\n",(c2>n)+(c1<p));

        //Exercice 5
        printf ("(c1>c2)||(c1<c2) = %d (int)\n",(c1>c2)||(c1<c2));
        printf ("q&&n = %d (int)\n",q&&n);
        printf ("(q-2)&&(n-10) = %d (int)\n",(q-2)&&(n-10));
        printf ("x*(q==2) = %f (float)\n\n\n",x*(q==2));


        getch();
}

