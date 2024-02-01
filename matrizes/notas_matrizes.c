#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char nomes[3][200];
    float notas[3][3];
    int i, j;
    float media [3], soma = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno: ");
        gets(nomes[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }

        media [i] = soma/j;
        soma = 0;
        //para o online gdb: 
        //setbuf(stdin, 0);

        fflush(stdin);
    }


    printf("\nExibindo as informações dos alunos... \n");

    for (i = 0; i < 3; i++)
    {
        printf("\nNome: %s \n", nomes[i]);
        for (j = 0; j < 3; j++)
        {
            printf("Notas: %.1f \n", notas[i][j]);
        }

        printf("Média: %.1f \n", media[i]);
    }

    return 0;
}
