#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct aluno{
    int mat;
    char nome[81];
    char end[121];
    char tel[21];

};

typedef struct aluno *Aluno;

void inicializao(int n, Aluno *tab){
    int ii;
    for (ii=0 ; ii<n ; ii++){
        tab[ii]= NULL;
    }
}

void preenche (int i){
    if ( tab[i] == NUL)
        tab [i] = (Aluno) malloc (sizeof(Aluno));
    printf("\nEntre com a matricula: ");
    scanf("%d", &tab[ii]->mat);
    printf("\nEntre com o nome: ");
    scanf("%80[^\n]", &tab[ii]->nome);
    printf("\nEntre com o endereco: ");
    scanf("%120[^\n]", &tab[ii]->end);
    printf("\nEntre com o telefone: ");
    scanf("%20[^\n]", &tab[ii]->tel);
}

void imprime_aluno (int ii, Aluno **tab){
    if (tab[ii] != NULL){

    }

}

int main(void){

    Aluno tab[MAX];

    inicializacao (3, tab);
    preenche (3, tab);
    imprime_aluno (0, tab);

    return 0;
}
