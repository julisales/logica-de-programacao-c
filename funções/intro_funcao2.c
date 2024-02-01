#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    ("\n==========================\n");
    ("\tSENAI - BA\n");
    ("\n==========================\n");
}

void limpartela()
{
    system("cls || clear");
}

int somar(int a, int b){
    int soma_numeros;
    soma_numeros = a + b;

    return soma_numeros;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero1, numero2, soma;

    cabecalho();

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    limpartela();

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    limpartela();

    soma = somar(numero1, numero2);

    cabecalho();

    printf("1º número: %d \n", numero1);
    printf("2º número: %d \n", numero2);
    printf("Soma: %d \n", soma);

    return 0;
}