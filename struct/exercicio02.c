#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    struct ficha_dados
    {
        char nome[200];
        int idade;
        float peso;
        float altura;
    };

    struct ficha_dados pessoa[5];

    for (i = 0; i < 5; i++)
    {

        printf("Digite os dados da %dª pessoa: \n", i + 1);

        printf("Digite seu nome: ");
        gets(pessoa[i].nome);

        printf("Digite sua idade: ");
        scanf("%d", &pessoa[i].idade);

        printf("Digite seu peso: ");
        scanf("%f", &pessoa[i].peso);

        printf("Digite sua altura: ");
        scanf("%f", &pessoa[i].altura);

        fflush(stdin);
        system("cls || clear");
    }

    printf("\n Exibindo os dados da pessoa...\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Dados da %dª pessoa: \n", i + 1);
        printf("Nome: %s \n", pessoa[i].nome);
        printf("Idade: %d \n", pessoa[i].idade);
        printf("Peso: %.2f \n", pessoa[i].peso);
        printf("Altura: %.2f \n \n", pessoa[i].altura);
    }
    return 0;
}

