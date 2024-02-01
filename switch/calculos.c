#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float r, n1, n2;
    char op;

    printf ("Digite o primeiro número: \n");
    scanf ("%f", &n1);
    printf ("Digite o segundo número: \n");
    scanf ("%f", &n2);
    fflush(stdin);
    printf ("Digite a operação desejada (+ - * /): \n");
    scanf ("%c", &op);

    switch (op)
    {
    case '+':
        r = n1 + n2;
        break;
    
    case '-':
        r = n1 - n2;
        break;
    
    case '*':
        r = n1 * n2;
        break;
    
    case '/':
        r = n1 / n2;
        break;
    
    default:
        printf ("Operação Inválida!");
        break;
    }

    printf ("%.1f %c %.1f = %.1f", n1, op, n2, r);

    return 0;
}
