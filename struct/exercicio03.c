#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;

    struct ficha_aluno
    {
        char nome[200];
        int idade;
        float notas[2];
    };

    struct ficha_aluno aluno[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno: ");
        gets(aluno[i].nome);

        printf("Digite a idade do aluno: ");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a %dª nota: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);
        }

        fflush(stdin);
        system("cls || clear");
    }

    printf("\n Exibindo os dados do aluno...\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("Nome do aluno: %s \n", aluno[i].nome);
        printf("Idade do aluno: %d \n", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%dª nota: %.2f \n", j + 1, aluno[i].notas[j]);
        }

        printf("\n");
    }

    return 0;
}