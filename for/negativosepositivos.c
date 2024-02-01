#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    float numeros[10];
    int negativos = 0;
    float somaPositivos = 0;

    printf("Digite números reais: \n");
    for (i = 0; i < 10; i++){
        printf("Digite o %dº número: \n", i + 1);
        scanf("%f", &numeros[i]);
        
        if (numeros[i] < 0){
            negativos++;
        }
        else {
            somaPositivos += numeros[i];
        }
        
    }
    
    system("cls || clear");

    printf("Números digitados: \n");
    
    for (i = 0; i < 10; i++){
        printf("Número: %.1f\n", numeros[i]);
    }
    
    printf("\n");
    printf("Quantidade de números negativos: %d \n", negativos);
    printf("Soma dos números positivos: %f \n", somaPositivos);
    
    return 0;
}
    
