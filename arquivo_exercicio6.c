#include <stdio.h>
#include <stdlib.h>

struct _ponto{
    float x, y, z;

}typedef ponto;

void salva(char* nomeArquivo, ponto* p, int quantElementos){
    FILE* arquivo= fopen(nomeArquivo, "wb");
    if (arquivo == NULL){
        printf("\nErro na abertura do arquivo para escrita.");
        exit(1);
    }
    
    fwrite( p, sizeof(ponto), quantElementos, arquivo);

    fclose(arquivo);
}

void leitura(char* nomeArquivo, ponto* p, int quantElementos){
    FILE* arquivo= fopen(nomeArquivo, "rb");
    if (arquivo == NULL){
        printf("\nErro na abertura do arquivo para leitura.");
        exit(2);
    }

    fread( p, sizeof(ponto), quantElementos, arquivo);

    fclose(arquivo);
}

int main(){

    return 0;
}