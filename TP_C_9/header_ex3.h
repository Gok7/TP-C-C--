int nombre[3];
void Saisi(){
        char nombre_car[10];
        int i=0;
        for(i=0;i<3;i++){
                printf("Veuillez Saisir le nombre %d : ",i+1);
                fflush(stdin);
                fgets(nombre_car,8,stdin);
                nombre[i]=atoi(nombre_car);
        }
}

int Max(int P_nombre[]){
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

int Min(int P_nombre[]){
        int i=0;
        int min=INT_MAX;
        do{
                if(P_nombre[i]<min){
                        min=P_nombre[i];
                }
                i++;
        }while(i<3);
        return min;
}
 