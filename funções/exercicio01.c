#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo (float a, float b){
    float media;
    media = (a + b)/2;

    return media;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    float numero1, numero2, media = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &numero2);

    media = calculo(numero1, numero2);

    system("cls || clear");

    printf("1� n�mero: %.f\n", numero1);
    printf("2� n�mero: %.f \n", numero2);
    printf("M�dia: %.2f \n", media);

    return 0;
}