#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char disciplinas[3][200];
    float notas[3][2], media[3], soma = 0;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Informe a disciplina: ");
        gets(disciplinas[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a %dº nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }

        media[i] = soma / j;
        soma = 0;

        fflush(stdin);
    }

    printf("\nInformações: \n");

    for (i = 0; i < 3; i++)
    {
        printf("\nDisciplina: %s \n", disciplinas[i]);
        for (j = 0; j < 2; j++)
        {
            printf("%dº nota: %.1f \n", j + 1, notas[i][j]);
        }

        printf("Média: %.1f \n", media[i]);
    }

    return 0;
}
