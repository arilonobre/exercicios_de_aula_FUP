#include <stdio.h>

#define PI 3.1415926536

int main(){
    FILE* lerArquivo;
    int retorno;
    char lerLinha[121];
    char tipoFigura;
    float par1Fig, par2Fig;

    lerArquivo= fopen("figuras.txt", "rt");
    if (lerArquivo == NULL){
        printf("\nErro de abertura do arquivo.");
        return 1;
    }

    while (fgets(lerLinha, 121, lerArquivo)){
        retorno= sscanf(lerLinha, "%c %f %f", &tipoFigura, &par1Fig, &par2Fig);
        if (retorno > 0){
            switch(tipoFigura){
                case '#':   //Despreza a linha de comentario
                    break;

                case 'r':
                    if (retorno != 3)
                        printf("\n\nDados nao padronizados para o calculo do retangulo.");
                    else
                        printf("\n\nA area do retangulo eh %.2f.", par1Fig*par2Fig);

                    break;

                case 't':
                    if (retorno != 3)
                        printf("\n\nDados nao padronizados para o calculo do triangulo.");
                    else
                        printf("\n\nA area do triangulo eh %.2f.", par1Fig*par2Fig/2);

                    break;

                case 'c':
                    if (retorno != 2)
                        printf("\n\nDados nao padronizados para o calculo do circulo.");
                    else
                        printf("\n\nA area do circulo eh %.9f.", par1Fig*par1Fig*PI);

                    break;
                default:
                    printf("\n\nDados nao padronizados.");
            }
        }
    }
    printf("\n\n");

    fclose(lerArquivo);

    return 0;
}
