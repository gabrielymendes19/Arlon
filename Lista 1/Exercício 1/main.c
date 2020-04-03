#include <stdio.h>
#include <stdlib.h>

int main(){

    float v, r, i;

    printf("Digite a Voltagem: ");
    scanf("%f", &v);
    printf("\nDigite a Resistencia: ");
    scanf("%f", &r);

    i = v / r;

    printf("\nA corrente e igual a: %.2f", i);

return 0;
}

