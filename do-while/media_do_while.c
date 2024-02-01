#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int i;
	float nota = 0;
	float soma, media;
	char resultado [200];

	printf("------------ CALCULADORA DE MÉDIA -------------\n");
	
	for (i = 1; i <= 3; i++) {
		do 
		{
			printf("Digite a %d° nota: ", i);
			scanf("%f",&nota);
			
		} while (nota < 0 || nota > 10);
		
		soma += nota;
    }
	
	media = soma/3;

    system("cls || clear");
	
	if (media >= 7)
	{
		strcpy(resultado, "Você foi aprovado! :)");
	}
	
	else if (media >= 5)
	{
		strcpy(resultado, "Você está em recuperação! :/");
	}
	
	else 
	{
		strcpy(resultado, "Você foi reprovado! :(");
	}
	
	printf("Sua média foi: %.1f \n",media);
	printf(resultado);

	return 0;
}
