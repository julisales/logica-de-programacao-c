#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    float notas[3];
    int i;
    float soma = 0, media = 0;

    printf("Digite as notas: \n");
    for (i = 0; i < 3; i++){
        printf("%dª nota: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    media = soma / 3;

    for (i = 0; i < 3; i++){
        printf("%dª nota: %.1f\n", i + 1, notas[i]);
    }

    printf("Média: %.1f", media);

    return 0;
}
