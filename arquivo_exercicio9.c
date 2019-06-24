#include <stdio.h>

void quicksort(int n, int *vet){
    if (n <= 1) return;
    else{
        int x= vet[0];
        int a= 1;
        int b= n-1;
        do{
            while (a < n && vet[a] <= x) a++;
            while (vet[b] > x) b--;

            if (a < b){
                int temp= vet[a];
                vet[a]= vet[b];
                vet[b]= temp;
                a++;
                b--;
            }       
        }while (a <= b);
        
        vet[0]=vet[b];
        vet[b]= x;

        quicksort(b, vet);
        quicksort(n-a, &vet[a]);
    }
}

int main(){
    int i, n=5;
    int vetor[]= { 24, 3, 9, 17, 37};

    quicksort( n, vetor);

    printf("\nO vetor ordenado eh:\n");

    for (i=0 ; i<n ; i++)
        printf("%d\t", vetor[i]);

    return 0;
}