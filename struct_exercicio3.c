//Declaracao de bibliotecas
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct aluno{
    int mat;        //matricula
    char nome[81];  //nome do aluno
    char end[121];  //endereco do aluno
    char tel[21];   //telefone do aluno
}Aluno;

//Subrotina para inicializar cada variavel da estrutura "aluno"
void inicializa(Aluno** tab, int quantAlunos){
    int ii;

    for (ii=0 ; ii<quantAlunos ; ii++){
        tab[ii]= NULL;
    }
}

//Subrotina para preencher cada variavel da estrutura "aluno"
void preenche(Aluno** tab, int ii){
    if (tab[ii] == NULL){
        tab[ii] = (Aluno*) malloc (sizeof(Aluno));
    }

    printf("\nEntre com a  matricula: ");
    scanf("%d", &tab[ii]->mat);
    printf("\nEntre com o nome: ");
    scanf(" %80[^\n]", &tab[ii]->nome);
    printf("\nEntre com o endereco: ");
    scanf(" %120[^\n]", &tab[ii]->end);
    printf("\nEntre com o telefone: ");
    scanf(" %20[^\n]", &tab[ii]->tel);
}

//Subrotina para retirar o conteudo de uma variavel da estrutura "aluno"
void retira(Aluno** tab, int ii){
    if (tab[ii] != NULL){
        free( tab[ii] );
        tab[ii]= NULL;
    }
}

//Subrotina para imprimir o conteudo de uma posicao da estrutura "aluno"
void imprime_aluno(Aluno** tab, int ii){
    printf("\n\nInformacoes do aluno %d:", ii+1);
    if (tab[ii]!=NULL){
        printf("\nMatricula: %d",tab[ii]->mat);
        printf("\nNome: %s", tab[ii]->nome);
        printf("\nEndereco: %s", tab[ii]->end);
        printf("\nTelefone: %s", tab[ii]->tel);
    }
}

//Subrotina para imprimir o conteudo de toda a variavel da estrutura "aluno"
void imprime_tudo(Aluno** tab, int quantAlunos){
    int ii;

    for (ii=0 ; ii<quantAlunos ; ii++){
        imprime_aluno(tab, ii);
    }
}

int main(void){
    int ii, quantAluno= 2;

    Aluno* tab[quantAluno];

    inicializa (tab, quantAluno);

    for (ii=0 ; ii<quantAluno ; ii++){
        preenche(tab, ii);
    }

    imprime_tudo(tab, quantAluno);

    retira(tab , 1);

    imprime_tudo(tab, quantAluno);

    return 0;
}
