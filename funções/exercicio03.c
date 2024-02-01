#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void identifica_numero(int numero)
{
    int i;
    
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", numero, i, numero * i);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Insira um número: \n ");
    scanf("%d", &numero);

    identifica_numero(numero);

    return 0;
}