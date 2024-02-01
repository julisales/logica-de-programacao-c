#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num, i;

    printf("Digite um número: ");
    scanf("%d", &num);

    system("cls || clear");

    printf ("---------------------- TABUADA DO %d ----------------------\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", num, i, i * num);
    }

    printf ("-----------------------------------------------------------\n");

    return 0;
}
