#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    int contador = 0, i = 0;
    float media, soma = 0, nota;
    char resposta;

    do {

        printf("Digite a %d° nota: ", i++);
        scanf("%f",&nota);

        soma += nota;
        contador++;     

        printf("Deseja digitar outra nota?\n");
        printf("S - Sim | N - Não\n");
        scanf("%c",&resposta);

        resposta = toupper(resposta);

        if(resposta == 'N')
        {
            media = soma / contador;
            printf("Sua média é: %.1f", media);
        }
        
    } while (resposta != 'N');
     
    return 0;
}
