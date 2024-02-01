#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    
    printf ("------------------------- NÚMEROS PARES DE 100 A 200 ------------------------- \n");

    // Primeira forma
    for (i = 100; i <= 200; i+=2){
        printf("%d \n", i);
    }

    printf("\n");

    // Segunda forma
    for (i = 100; i <= 200; i++){
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
        
    }

    return 0;
}
