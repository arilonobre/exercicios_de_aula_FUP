#include <stdio.h>

int busca_linear(int dim, int* vet, int elem){
    int ii;

    for (ii=0 ; ii<dim ; ii++)
        if (elem == vet[ii]) return ii;

    return -1;

}

int busca_linear_ord(int dim, int* vet, int elem){
    int ii;

    for (ii=0 ; ii<dim ; ii++)
        if (elem == vet[ii]) return ii;
        else if (elem < vet[ii]) return -1;

    return -2;

}

int frequencia(int dim, int* vet, int elem){
    int contador=0;
    
    int ii;
    for (ii=0 ; ii<dim ; ii++)
        if (elem == vet[ii]) contador++;

    return contador;

}

int ocorrencia(int dim, int* vet, int elem, int* posElem){
    int contador=0;
    
    int ii;
    for (ii=0 ; ii<dim ; ii++)
        if (elem == vet[ii]){
            posElem[contador]= ii;
            contador++;
        }
    
    return contador;

}

int main (){
    int vetor[10]= {0,1,1,2,3,5,8,13,21,34};
    int resposta;
    int elemento= 22;

    resposta= frequencia(10 , vetor , elemento);

    if (resposta == 0)
        printf("\nEsse elemento nao se encontra no vetor em questao.\n");
    else
        printf("\nA frequencia do numero %d no vetor em questao eh %d.\n", elemento,  resposta);

    return 0;
}