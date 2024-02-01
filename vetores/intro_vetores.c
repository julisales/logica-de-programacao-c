#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    int vetor[5];
    int i;

    printf("Digite os elementos do vetor: \n");
    for (i = 0; i < 5; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++){
        printf("Elemento %d: %d\n", i + 1, vetor[i]);
    }

    return 0;
}
