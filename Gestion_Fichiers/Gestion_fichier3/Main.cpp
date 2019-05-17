#include "header.h"
#define MAX 50

int main(int argc, char** argv) {
    FILE *fp;
    int data,count,array[MAX];
    long offset;
    
    for(count=0;count<MAX;count++){
        array[count]=count*10;
    }
    
    fp = fopen("C:\\Users\\Zombie\\Desktop\\text.txt", "wb");
    if (fp == NULL) {
        fprintf(stderr, "Erreur ouverture");
        exit(EXIT_FAILURE);
    }
    
    if ((fwrite(array,sizeof(*array),MAX,fp)) !=MAX) {
        fprintf(stderr, "Erreur ecriture");
        exit(EXIT_FAILURE);
    }
    fclose(fp);

    fp = fopen("C:\\Users\\Zombie\\Desktop\\text.txt", "rb");
    if (fp == NULL) {
        fprintf(stderr, "Erreur ouverture\n");
        exit(EXIT_FAILURE);
    }
    while(1){
        printf("\nIndiquer element a lire : ,0-%d,-1 pour arreter : ",
                MAX-1);
        fflush(stdin);
        scanf("%ld",&offset);
        if(offset<0)
            break;
        
        else if(offset > MAX-1)
            continue;
        
        if(fseek(fp,(offset*sizeof(int)),SEEK_SET)){
            fprintf(stderr,"\nErreur avec fseek()");
            exit(EXIT_FAILURE);
        }
        
        fread(&data,sizeof(data),1,fp);
        printf("\nelement : %ld a la valeur %d\n",offset, data);
        fclose(fp);
        exit(EXIT_SUCCESS);
    } 
   return 0;         
}

