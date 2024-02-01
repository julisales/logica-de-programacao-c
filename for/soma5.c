#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
     
    int i, num;
    int soma = 0;

    for (i = 1; i <= 5; i++){
        printf("Digite o %d° número: ", i);
        scanf("%d", &num);

        soma += num;
    }

    printf("Soma: %d", soma);

    return 0;
}
