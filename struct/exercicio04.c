#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha_dados
    {
        char nome[200];
        int idade;
        char endereco[200];
    };

    struct ficha_dados pessoa;

    printf("Digite seu nome: ");
    gets(pessoa.nome);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    fflush(stdin);

    printf("Digite seu endereço: ");
    gets(pessoa.endereco);

    fflush(stdin);
    system("cls || clear");

    printf("\n Exibindo os dados...\n\n");

    printf("Nome: %s \n", pessoa.nome);
    printf("Idade: %d \n", pessoa.idade);
    printf("Endereço: %s \n", pessoa.endereco);

    return 0;
}