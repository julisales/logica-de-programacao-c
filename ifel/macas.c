#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int maca;
    float preco_u, preco_p, total;


    printf("------------------------------------------------------\n");
    printf("|                   MAÇÃ: R$1,30                     |\n");
    printf("|           ACIMA DE 12 UNIDADES: R$1,00             |\n");
    printf("------------------------------------------------------\n");

    printf("Quantas maçãs você comprou? \n");
    scanf("%d", &maca);

    preco_u = 1.30;
    preco_p = 1.00;

    system("cls || clear");

    if (maca > 12)
    {
        total = maca * preco_p;
    }

    else
    {
        total = maca * preco_u;
    }

    printf("O valor total a pagar é: %.2f", total);

    return 0;
}
