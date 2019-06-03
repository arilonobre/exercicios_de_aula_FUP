#include <stdio.h>
#include <stdlib.h>
#include <string.h> //contem a funcao strstr()

int main(void){
    int caractere, achou=0, contador= 0;
    FILE* lerArquivo;
    char entrada[31];
    char cadeia[51];
    char subcadeia[11];

    printf("\nDigite o nome do arquivo: ");
    scanf("%30s", &entrada);

    lerArquivo = fopen(entrada, "rt");

    if (lerArquivo == NULL){
        printf("\nErro na abertura do arquivo de leitura.");
        exit(1);
    }

    printf("\nDigite a subcadeia de caracteres a ser procurada no arquivo: ");
    scanf("%50s", &subcadeia);

    while (fgets(cadeia, 51, lerArquivo) != NULL){
        contador++;

        if (strstr(cadeia, subcadeia) != NULL){
            achou= 1;
            break;
        }
    }

    if (achou){
        printf("\nA subcadeia foi encontrada na linha %d.", contador);

    }else
        printf("\nNao foi encontrada a subcadeia.");

    fclose(lerArquivo);

    return 0;
}
