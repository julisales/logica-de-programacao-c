#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha_dados {
        char nome[200];
        char data[200];
        char rg[200], cpf[200];
    };

    struct ficha_dados usuario[2];

    int i;

    for(i = 0; i < 2; i++){
        printf("Digite as informações do %dº usuário: \n", i + 1);

        printf("Nome: ");
        gets(usuario[i].nome);

        printf("Data de nascimento: ");
        gets(usuario[i].data);

        printf("RG: ");
        gets(usuario[i].rg);

        printf("CPF: ");
        gets(usuario[i].cpf);

        fflush(stdin);
        system("cls || clear");
    }

    for(i = 0; i < 2; i++){
        printf("Informações do %dº usuário: \n", i + 1);

        printf("Nome: %s \n", usuario[i].nome);
        printf("Data: %s \n", usuario[i].data);
        printf("RG: %s \n", usuario[i].rg);
        printf("CPF: %s \n \n", usuario[i].cpf);
    }
     
    return 0;
}
