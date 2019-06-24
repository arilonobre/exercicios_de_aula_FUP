#include <stdio.h>

#define T 5

void bolha_v0( int dim, int *vet){
    
    int i, j, temp;

    for (i= dim-1; i>=1 ; i--)
        
        for (j= 0 ; j<i ; j++)

            if (vet[j] > vet[j+1]){
                temp= vet[j];
                vet[j]= vet[j+1];
                vet[j+1]= temp;
            }
}

void bolha_v1( int dim, int *vet){
    
    int i, j, temp, troca;

    for (i= dim-1; i>=1 ; i--){
        
        troca= 0;

        for (j= 0 ; j<i ; j++)

            if (vet[j] > vet[j+1]){
                temp= vet[j];
                vet[j]= vet[j+1];
                vet[j+1]= temp;
                
                troca= 1;
            }

        if (troca == 0){
            printf("\nO vetor ja esta ordenado para os valores de %d e %d.", i, j);
            return;
        }
    }
}

int main(){
    
    int i;
    int vetor[T]= {24, 3, 9, 17, 37};

    bolha_v1( T, vetor);
    
    printf("\nO vetor ordenado eh:\n");
    
    for (i=0 ; i<T ; i++)
        printf("%d\t", vetor[i]);

    return 0;
}
