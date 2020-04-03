#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nam[15];
    float n1, n2, md;

    printf("Digite o nome do aluno: ");
    scanf("%s", &nam[15]);

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);

    md = (n1 + n2) / 2;

    printf("\nO nome do aluno: %s", nam[15]);

    printf("\nA media final: %.2f pontos", md);

    return 0;
}
