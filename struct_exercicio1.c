#include <stdio.h>
#include <math.h>

typedef struct ponto{
    float x, y;

}Ponto;

typedef struct circulo{
    Ponto centro;
    float raio;

}Circulo;

int distancia(Circulo *c, Ponto *p){

    float dist = sqrt(pow((*c).centro.x - (*p).x , 2) + pow((*c).centro.y - (*p).y , 2));

    return (dist <= (*c).raio);
}

int main(void){

    Circulo circ;
    Ponto pont;
    int resp;

    printf("\n********** Digite os dados do circulo *********");
    printf("\nDigite as coordenadas do centro do circulo: ");
    scanf("%f %f", &circ.centro.x, &circ.centro.y);

    printf("\nDigite o raio do circulo: ");
    scanf("%f", &circ.raio);

    printf("\n********* Digite os dados do ponto **********");
    printf("\nDigite as coordenadas do ponto: ");
    scanf("%f %f", &pont.x, &pont.y);

    resp= distancia( &circ, &pont);

    if (resp) printf("\nO ponto pertence ao circulo.");
    else printf("\nO ponto nao pertence ao circulo.");

    return 0;
}
