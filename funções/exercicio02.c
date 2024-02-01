#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void identifica_numero(int numero)
{
    if (numero % 2 == 0)
    {
        printf("Este número é par!");
    }
    else
    {
        printf("Este número é ímpar!");
    }
}

int main()
{
    int numero;

    setlocale(LC_ALL, "portuguese");

    printf("Insira um numero: \n ");
    scanf("%d", &numero);

    identifica_numero(numero);

    return 0;
}