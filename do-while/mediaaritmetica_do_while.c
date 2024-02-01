#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    int i = 1, numero, contador = 0;
    float soma, media;


    printf("Digite os valores que deseja calcular a média aritmética \n");
    printf("\n");
    printf("Caso deseje parar e verificar a média aritmética, digite qualquer valor negativo \n");

    do{
        printf("Digite o %d° número: ", i++);
        scanf("%d",&numero);

        if (numero > 0)
        {
            soma += numero;
            contador++;
        }
    } while(numero > 0);

    media = soma/contador;

    printf("A média é: %.1f", media);
    
    return 0;
}
