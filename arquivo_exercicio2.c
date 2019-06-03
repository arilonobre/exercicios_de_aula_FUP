#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  //coloca os caracteres em caixa alta toupper()

int main(void){
    int caractere;
    FILE* lerArquivo;
    FILE* escreverArquivo;
    char entrada[31];

    printf("\nDigite o nome do arquivo: ");
    scanf("%30s", &entrada);

    lerArquivo = fopen(entrada, "rt");

    if (lerArquivo == NULL){
        printf("\nErro na abertura do arquivo de leitura.");
        exit(1);
    }

    escreverArquivo = fopen("saida.txt", "wt");

    if (escreverArquivo == NULL){
        printf("\nErro na abertura do arquivo de escrita.");
        exit(2);
    }

    //Ler caracteres no primeiro e escrever no segundo arquivo em Maiusculo
    while ((caractere = fgetc(lerArquivo)) != EOF){
        fputc(toupper(caractere), escreverArquivo);
    }

    fclose(lerArquivo);
    fclose(escreverArquivo);

    return 0;
}
