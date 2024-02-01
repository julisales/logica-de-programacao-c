#include <stdio.h>
#include <stdlib.h>

int main () {
    int n = 0;

    printf ("-----------------------------------------------------------------------------------------------------------------------\n");
    printf ("PARA SABER SE O NUMERO DIGITADO E MAIOR, MENOR OU IGUAL A 10. \n");

      printf ("------------------------------------------------------------------------------------------------------------------------\n");
    
    printf ("\n");
    printf ("Digite um numero:\n");
    scanf ("%d", &n);

    system("cls || clear");
    
    printf ("===================================================== RESULTADO ========================================================\n");
    
    if (n > 10)
    {
        printf("O numero %d e maior que 10. \n", n); 
    }
    else if (n == 10)
    {
        printf("O numero %d e igual a 10.", n);
    }
    else
    {
        printf("O numero %d e menor que 10. \n",n);
    }

    printf ("========================================================================================================================\n");
   
    return 0;
}
