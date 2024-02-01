#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    char ls [250] = "maria";
    char ss [250] = "123456"; 
    char l [250];
    char s [250]; 
    printf ("Entre na sua conta\n");

    printf ("Login:\n");
    gets (l);

    printf ("Senha:\n");
    gets (s);

   if (strcmp(l, ls) == 0 && strcmp(s, ss) == 0)
   {
       printf ("Olá! bem vindo a sua conta");
   }
   else
   {
    printf ("SENHA OU LOGIN INCORRETOS");
   }
   

    return 0;
}
