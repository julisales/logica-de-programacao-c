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

    printf("Digite as informaçõees do funcionário: \n");

    printf("Nome: ");
    gets(funcionario.nome);

    printf("Idade: ");
    scanf("%d", &funcionario.idade);

    fflush(stdin);

    printf("CPF: ");
    gets(funcionario.cpf);

    system("cls || clear");

    printf("Digite as informações do cliente: \n");

    printf("Nome: ");
    gets(cliente.nome);

    printf("Idade: ");
    scanf("%d", &cliente.idade);

    fflush(stdin);

    printf("CPF: ");
    gets(cliente.cpf);

    system("cls || clear");

    printf("Informações do funcionário: \n");

    printf("Nome: %s \n", funcionario.nome);
    printf("Idade: %d \n", funcionario.idade);
    printf("CPF: %s \n \n", funcionario.cpf);

    printf("Informações do cliente: \n");

    printf("Nome: %s \n", cliente.nome);
    printf("Idade: %d \n", cliente.idade);
    printf("CPF: %s \n \n", cliente.cpf);

    return 0;
}
