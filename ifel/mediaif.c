#include <stdio.h>

#include <stdlib.h>

int main () {

    float nt1 = 0; 
    float nt2 = 0;
    float m = 0; 

    printf ("Digite sua primeira nota: ");
    scanf ("%f", &nt1);

    printf ("Digite sua segunda nota: ");
    scanf ("%f", &nt2);
   
    m = (nt1+nt2)/2;

    system("cls || clear");

    printf ("A sua média é: %2.f \n", m);

    if (m >= 7)
    {
        printf ("Voce foi aprovado :)");
    }
    else
    {
        printf ("Voce foi reprovado :(");
    }
    
    return 0;
}
