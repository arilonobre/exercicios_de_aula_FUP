#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Declarar a variavel para leitura de arquivos

    FILE* leituraArquivo;
    int fecharArquivo, quantLinhas=0, caractere, quantCaracteres=0;
    char nomeArquivo[21];

    //leituraArquivo = fopen("Primeiro.txt", "rt");
    printf("\nDigite o nome do arquivo: ");
    scanf(" %20s", &nomeArquivo);

    leituraArquivo = fopen(nomeArquivo, "rt");

    //Teste para verificar a abertura correta do arquivo
    if (leituraArquivo == NULL){
        printf("\nErro na abertura do arquivo.");
        exit(1);
    }
    //Subrotina para fechamento do arquivo ao termino do programa
    //fprintf(leituraArquivo, "\n\nObra de Shakespeare!");

    /*do{
        caractere= fgetc(leituraArquivo);
        if (caractere == '\n')
            quantLinhas++;

    }while ( caractere!= EOF );

    printf("\nQuantidade de Linhas do arquivo: %d", quantLinhas);*/

    while ( fgetc(leituraArquivo)!= EOF )
        quantCaracteres++;

    printf("\nQuantidade de caracteres do arquivo: %d", quantCaracteres);

    fecharArquivo= fclose(leituraArquivo);

    if (fecharArquivo == 0){
        printf("\nO arquivo foi fechado corretamente.\n");

    }else{
        printf("\nHouve erro no fechamento do arquivo.\n");
        exit(2);
    }

    return 0;
}
