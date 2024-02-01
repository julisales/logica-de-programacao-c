#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    float notas[4];
    int i;
    float soma = 0, media = 0;
    char resultado [50];

    printf("Digite as notas: \n");
    for (i = 0; i < 4; i++){
        printf("%dª nota: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
    
    system("cls || clear");

    media = soma / 4;

    for (i = 0; i < 4; i++){
        printf("%dª nota: %.1f\n", i + 1, notas[i]);
    }
    
    if(media >= 7){
        strcpy(resultado, "Aprovado!");
    }
    
    else if (media >= 5) {
        strcpy(resultado, "Recuperação!");
    }
    
    else {
        strcpy(resultado, "Reprovado!");
    }

    printf("Média: %.1f \n \n", media);
    printf("Resultado: %s \n", resultado);

    return 0;
}
