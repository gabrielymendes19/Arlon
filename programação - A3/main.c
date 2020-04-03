#include <stdio.h>
#include <stdlib.h>

void Ex1L01(int v, int r)
{
    float i;

    printf("\nDigite a Voltagem: ");
    scanf("%d", &v);

    printf("\nDigite a Resistencia: ");
    scanf("%d", &r);

    i = v / r;

    printf("\nA corrente e igual a: %.2fV\n", i);

}

int Ex3L02 (int num1, int num2)
{
    int num3;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    num3 = num1 + num2;

    if ( num3 > 20 )
    {
        num3 = num3 + 8;
        printf("\nResultado: %d\n", num3);
    }

    if  ( num3 <= 20 )
    {
        num3 = num3 - 5;
        printf("\nResultado: %d\n", num3);
    }
}

int Ex4L02 (int n1, int n2)
{
    printf("\nDigite um numero: ");
    scanf("%d", &n1);

        n2 = n1%3;

    if( n2 == 0 )

        printf("\nE multiplo de 3\n");

    else

        printf("\nNao e multiplo de 3\n");

}

int Ex5L03 (int n=0)
{
    int c=1,calculo;

printf("Digite um numero: ");

scanf("%d",&n);

while (c<=10) {

calculo=n*c;

printf("%d x %d = %d\n",c,n,calculo);

c++; }

getch(); }

return 0;
}

int main()
{
    int retorno;
    int v,r, num1, num2, n1, n2, n=0;

    printf("- 1\n- 2\n- 3\n- 4\n- 5\n\n");

    printf("Escolha uma funcao:\n");
    scanf("%d",&retorno);

    switch(retorno)
    {
        case 1:
        Ex1L01(v,r);
        break;
        case 2:
        Ex3L02 (num1, num2);
        break;
        case 3:
        Ex4L02 (n1, n2);
        break;
        case 4:
        Ex5L03 (n=0);
        break;
        case 5:
        exit(retorno);
        break;
    }
    system("pause");
    return 0;
}
