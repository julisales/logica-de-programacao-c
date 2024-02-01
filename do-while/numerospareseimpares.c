#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero, pares = 0, impares = 0, soma_par = 0, soma_geral = 0, contador_geral = 0;
    
    float media_par, media_geral;

    printf("Para parar a execução digite 0.\n");
    printf("\n");

    do
    {
        printf("Digite o %d número: ", contador_geral + 1);
        scanf("%d", &numero);
        
        if (numero > 0)
        {
            soma_geral += numero;
            contador_geral++;

            if (numero % 2 == 0)
            {
                soma_par += numero;
                pares++;
            }

            else
            {
                impares++;
            }
        }
    } while (numero != 0);

    media_par = soma_par / (float) pares;
    media_geral = soma_geral / (float) contador_geral;

    printf("Quantidade de números pares: %d \n", pares);
    printf("Quantidade de números ímpares: %d \n", impares);
    printf("Média números pares: %.1f \n", media_par);
    printf("Média geral: %.1f \n", media_geral);

    return 0;
}
