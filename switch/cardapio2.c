#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;

    printf ("-------------------------------------------------------------------- \n");
    printf ("                          MENU DE OPÇÕES                           \n");
    printf ("-------------------------------------------------------------------- \n");

    printf ("CÓDIGO                        PRATOS                          PREÇO \n");
    printf ("  1                          PICANHA                        R$25,00 \n");
    printf ("  2                          LASANHA                        R$20,00 \n");
    printf ("  3                         STROGONOFF                      R$18,00 \n");
    printf ("  4                       BIFE ACEBOLADO                    R$15,00 \n");
    printf ("  5                        PÃO COM OVO                      R$5,00 \n");

    printf ("\n");

    printf ("Digite o código do prato desejado: ");
    scanf ("%d", &codigo);

    system ("cls || clear");

    switch (codigo)
    {
    case 1 :
        printf("O prato escolhido foi: Picanha. \n");
        printf("Valor: R$25,00");
        break;
    
    case 2 :
        printf("O prato escolhido foi: Lasanha. \n");
        printf("Valor: R$20,00");
        break;
    
    case 3 :
        printf("O prato escolhido foi: Strogonoff. \n");
        printf("Valor: R$18,00");
        break;
    
    case 4 :
        printf("O prato escolhido foi: Bife Acebola \ndo.");
        printf("Valor: R$15,00");
        break;
    
    case 5 :
        printf("O prato escolhido foi: Pão com ovo. \n");
        printf("Valor: R$5,00");
        break;
    
    default:
        printf ("Código Inválido!");
        break;
    }
    
    return 0;
}
