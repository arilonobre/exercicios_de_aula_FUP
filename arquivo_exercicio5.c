#include <stdio.h>
#include <string.h>

#define PI 3.1415926536

int main(){
    FILE* lerArquivo;
    int retorno;
    char lerLinha[121];
    char tipoFigura;
    float par1Fig, par2Fig;

    lerArquivo= fopen("figuras2.txt", "rt");
    if (lerArquivo == NULL){
        printf("\nErro de abertura do arquivo.");
        return 1;
    }

    while ( fscanf(lerArquivo, "%120s", lerLinha)){
        if (strcmp(lerLinha, "RETANGULO") == 0){
            //Bloco com os comandos para calculo da area do retangulo

        }else if (strcmp(lerLinha, "TRIANGULO") == 0){
            //Bloco com os comandos para calculo da area do triangulo

        }else if (strcmp(lerLinha, "CIRCULO") == 0){
            //Bloco com os comandos para calculo da area do circulo

        }else
            printf("\n\nDados nao padronizados para calcular a area da figura geometrica.")
    }

    fclose(lerArquivo);

    return 0;
}
