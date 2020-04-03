#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &n1);

    printf("\nDigite o combustivel gasto: ");
    scanf("%f", &n2);

    n3 = n1 / n2;

    printf("\nO consumo medio e de: %.2f Km/l", n3);

    return 0;
}
