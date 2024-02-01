#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int idade;

    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    if (idade >= 18 && idade <= 65)
    {
        printf ("Você é obrigado a votar!");
    }
    else
    {
        printf ("Você não é obrigado a votar!");   
    }
    
    return 0;
}
