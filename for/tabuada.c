#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;

    // para i de 1 ate 10 passo 1 faca
    // for (i = 1; i <= 10; i++) {
    // printf("%d \n", i);
    //}

    for (j = 3; j <= 7; j += 2)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d \n", j, i, i * j);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
