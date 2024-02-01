#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia;

    printf ("Digite um número para saber se é um dia útil: ");
    scanf ("%d", &dia);

    system ("cls || clear");

    switch (dia)
    {

    case 1 :
        printf("O número digitado foi %d e correponde a Segunda. \n", dia);
        printf ("É um dia útil.");
        break;
        
    case 2 :
        printf("O número digitado foi %d e corresponde a Terça. \n", dia);
        printf ("É um dia útil.");
        break;
        
    case 3 :
        printf("O número digitado foi %d e corresponde a Quarta. \n", dia);
        printf ("É um dia útil.");
        break;
        
    case 4 :
        printf("O número digitado foi %d e corresponde a Quinta. \n", dia);
        printf ("É um dia útil.");
        break;
        
    case 5 :
        printf("O número digitado foi %d e corresponde a Sexta. \n", dia);
        printf ("É um dia útil.");
        break;
        
    case 6 :
        printf("O número digitado foi %d e corresponde a Sábado. \n", dia);
        printf ("É final de semana.");
        break;
        
    case 7 :
        printf("O número digitado foi %d e corresponde a Domingo. \n", dia);
        printf ("É final de semana.");
        break;
        
    default:
        printf ("Opção inválida!");
        break;
    }
    
    return 0;
}
