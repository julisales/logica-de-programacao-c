#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha_dados
    {
        char nome[200];
        char cpf[200];
        int idade;
    };

    struct ficha_dados funcionario;
    struct ficha_dados cliente;

    printf("Digite as informa��ees do funcion�rio: \n");

    printf("Nome: ");
    gets(funcionario.nome);

    printf("Idade: ");
    scanf("%d", &funcionario.idade);

    fflush(stdin);

    printf("CPF: ");
    gets(funcionario.cpf);

    system("cls || clear");

    printf("Digite as informa��es do cliente: \n");

    printf("Nome: ");
    gets(cliente.nome);

    printf("Idade: ");
    scanf("%d", &cliente.idade);

    fflush(stdin);

    printf("CPF: ");
    gets(cliente.cpf);

    system("cls || clear");

    printf("Informa��es do funcion�rio: \n");

    printf("Nome: %s \n", funcionario.nome);
    printf("Idade: %d \n", funcionario.idade);
    printf("CPF: %s \n \n", funcionario.cpf);

    printf("Informa��es do cliente: \n");

    printf("Nome: %s \n", cliente.nome);
    printf("Idade: %d \n", cliente.idade);
    printf("CPF: %s \n \n", cliente.cpf);

    return 0;
}
