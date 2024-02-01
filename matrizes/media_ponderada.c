#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char disciplinas[3][200];
    float notas[3][3];
    float soma_pesos;
    float pesos[3], media[3];
    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        printf("Informe o nome da %d° disciplina: \n", i + 1);
        gets(disciplinas[i]);
        for (j = 0; j < 3; j++)
        {
            printf("Informe a %d° nota: \n", j + 1);
            scanf("%f", &notas[i][j]);
        }

        for (k = 0; k < 3; k++)
        {
            printf("Informe o peso da %dª nota: \n", k + 1);
            scanf("%f", &pesos[k]);

            soma_pesos += pesos[k];
        }
        media[i] = (notas[i][0] * pesos[0] + notas[i][1] * pesos[1] + notas[i][2] * pesos[2]) / soma_pesos;
        soma_pesos = 0;

        fflush(stdin);
        system("cls || clear");
    }

    for (i = 0; i < 3; i++)
    {
        printf("Nome da %d° disciplina: %s \n", i + 1, disciplinas[i]);
        printf ("\n");
        for(j = 0; j < 3; j++){
        printf("%d° Nota: %.1f \n", j + 1, notas[i][j]);
        printf("\n");
        }
        printf("Média Ponderada das notas: %.1f \n", media[i]);
    }
    return 0;
}
