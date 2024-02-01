#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha_dados
    {
        char nome[200];
        char data[200];
        char endereco[200];
        char matricula[200];
    };

    struct ficha_dados funcionario[1];
    struct ficha_dados cliente[1];

    int i;

    for (i = 0; i < 1; i++)
    {
        printf("Digite as informações do funcionário: \n");

        printf("Nome: ");
        gets(funcionario[i].nome);

        printf("Data de admissÃ£o: ");
        gets(funcionario[i].data);

        printf("Matrí­cula: ");
        gets(funcionario[i].matricula);

        printf("Endereço: ");
        gets(funcionario[i].endereco);

        fflush(stdin);
        system("cls || clear");
    }

    for(i = 0; i < 1; i++){
        printf("Digite as informações do cliente: \n");

        printf("Nome: ");
        gets(cliente[i].nome);

        printf("Data de nascimento: ");
        gets(cliente[i].data);

        printf("EndereÃ§o: ");
        gets(cliente[i].endereco);

        fflush(stdin);
        system("cls || clear");
    }

    for(i = 0; i < 1; i++){
    printf("Informações do %dº funcionário: \n", i + 1);

    printf("Nome: %s \n", funcionario[i].nome);
    printf("Data: %s \n", funcionario[i].data);
    printf("Matrí­cula: %s \n", funcionario[i].matricula);
    printf("Endereço: %s \n \n", funcionario[i].endereco);
    }

    for(i = 0; i < 1; i++){
    printf("Informações do %dº cliente: \n", i + 1);

    printf("Nome: %s \n", cliente[i].nome);
    printf("Data: %s \n", cliente[i].data);
    printf("Endereço: %s \n \n", cliente[i].endereco);
    }

    return 0;
}
