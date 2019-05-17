





void main()
{
 char nomfic[120];
 FILE * pf;
 ohar car;
 int taille;
 printf("chemin et nom du fichier: \n");
 gets (nomfic);
 if((pf=fopen(nomfic,"rb"))==0)   //pour lire
 {
  printf("impossible d'ouvrir ce fichier: \n"); getch(); exite(0);
 }
 else{ printf("le fichier %s est ouvert: \n",nomfic); getch(); }

 fread(&car,sizeof(char),1,pf);
 printf("premier caractere: %c\n",car);
 fread(&car,sizeof(char),1,pf);
 printf("deuxieme caractere: %c\n",car);
 fread(&car,sizeof(char),1,pf);
 printf("taille: %d\n",taille);
 fclose(pf);
 getch();
}
