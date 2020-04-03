#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nam[10][30];
    float a1[10], a2[10], md[10];
    int i = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o nome: ");
        scanf("%s", &nam[i]);
        printf("Digite a nota da A1: ");
        scanf("%f", &a1[i]);
        printf("Digite a nota da A2: ");
        scanf("%f", &a2[i]);
    }



    for ( i = 0; i < 10; i++)
    {
        md[i] = ( a1[i] + a2[i]) / 2;

        if ( md[i] >= 6 )
        {
            printf("\nO aluno %s foi aprovado com %.2f Pontos.", nam[i], md[i]);
        }
        else
        {
            printf("\nO aluno %s foi reprovado com %.2f Pontos.", nam[i], md[i]);
        }
    }

    system("PAUSE");
    return 0;
}
