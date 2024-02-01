#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tempo, ano, codigo, idade;

    printf("Digite seu código: ");
    scanf("%d", &codigo);

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("Digite há quanto tempo você trabalha (anos): ");
    scanf("%d", &tempo);

    idade = 2023 - ano;

    system("cls || clear");

    printf("Código: %d \n", codigo);
    printf("Tempo de trabalho: %d \n", tempo);
    printf("Idade: %d \n", idade);
    printf("\n");

    printf("---------------------------------------------------------------\n");
    printf("SITUAÇÃO: \n");

    if (idade >= 65 || tempo >= 30)
    {
        system("color 2");
        printf("REQUERER APOSENTADORIA!");
    }
    else
    {
        system("color 4");
        printf("NÃO REQUERER APOSENTADORIA!");
    }
    
    return 0;
}
