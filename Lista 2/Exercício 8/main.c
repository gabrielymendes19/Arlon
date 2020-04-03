#include <stdio.h>
#include <stdlib.h>

int main()
{
   float emp, sb, vp;

    printf("Digite o salario bruto: ");
    scanf("%f", &sb);

    printf("\nDigite o valor da prestacao: ");
    scanf("%f", &vp);

    emp = ( ( vp / sb ) * 100 );

    if ( emp <= 30 )
    {
        printf("\nEmprestimo concedido");
    }

    else
    {
        printf("\nEmprestimo nao concedido");
    }

    return 0;
}
