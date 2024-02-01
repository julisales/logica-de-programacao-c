#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char bandas[3][200];
    char integrantes[3][5][200];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome da %dª banda: ", i + 1);
        gets(bandas[i]);
        for (j = 0; j < 5; j++)
        {
            printf("Digite o nome do %dº integrante: ", j + 1);
            gets(integrantes[i][j]);
        }

        fflush(stdin);
        system("cls || clear");
    }

    for (i = 0; i < 3; i++){
        printf("%dª banda: %s \n", i + 1, bandas[i]);
        for (j = 0; j < 5; j++){
            printf("%dº integrante: %s \n", j + 1, integrantes[i][j]);
        }
        printf("\n");
    }

    return 0;
}
