#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;

    printf("Digite a temperatura em C: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("\nTemperatura: %.0fF ", f);

    return 0;
}
