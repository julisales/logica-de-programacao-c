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
    char resposta [200];
    char login1 [200], senha1 [200];

    do{
    printf("---------------------------------------------------------------------\n");
    printf("Escolha uma das opções\n");
    printf("1 - Login\n");
    printf("2 - Cadastro\n");
    scanf("%d",&sign);
    
    switch (sign)
    {
    case 1:
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
                printf("ACESSO NEGADO!");
            }

        } while (strcmp(login, loginsalvo || login1) != 0 && strcmp(senha, senhasalva || senha1) != 0);

        break;

    case 2:
        printf("Crie um usúario: ");
        gets(login1);

        printf("Crie uma senha: ");
        gets(senha1);

        system("cls || clear");

        printf("Deseja fazer login? (Sim ou Nao)");
        gets(resposta);
    break;

    default:
        printf("Código Inválido!");
        break;
    }

    } while (strcmp(resposta, "Sim") == 0);

    return 0;
}
