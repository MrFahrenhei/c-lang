#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_hexa(float l, float *area, float *perimetro){
    *area = (3*M_PI*l*l)/2;
    *perimetro = 6 * l;
}

int main(){
    float lado, area, perimetro;
    printf("Digite o lado do hexágono (valor negativo para sair):");
    scanf ("%f", &lado);
    while(lado >= 0){
        calc_hexa(lado, &area, &perimetro);
        printf("Área do hexágono: %.2f\n", area);
        printf("Perímetro do hexágono: %.2f\n", perimetro);
        printf("Digite o lado do hexágono (valor negativo para sair):");
        scanf ("%f", &lado);
    }
    return 0;
}