#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char login[200];
    char senha[200];
    char loginsalvo[200] = "Maria";
    char senhasalva[200] = "seila123";
    int sign;
    char resposta[200];
    char login1[200], senha1[200];

    do
    {

        printf("Usuário: ");
        gets(login);

        printf("Senha: ");
        gets(senha);

        if (strcmp(login, loginsalvo) != 0 && strcmp(senha, senhasalva) != 0)
        {
            printf("ACESSO NEGADO!");
            printf("Usuário ou senha errados!");
        }

        else
        {
            printf("ACESSO PERMITIDO!");
        }

    } while (strcmp(login, loginsalvo || login1) != 0 && strcmp(senha, senhasalva || senha1) != 0);

    return 0;
}
