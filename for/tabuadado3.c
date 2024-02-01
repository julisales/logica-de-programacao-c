#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    //para i de 1 ate 10 passo 1 faca
    //for (i = 1; i <= 10; i++) {
       //printf("%d \n", i);
    //}

    for (i = 1; i <= 10; i++) {
        printf("%d x 3 = %d \n", i, i*3);
    }

    getchar();
    return 0;
}
