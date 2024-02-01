#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	struct ficha_dados {
		char nome[200];
		int idade;
        float peso;
        float altura;
	};
	
	struct ficha_dados pessoa;
	
	printf("Digite seu nome: ");
	gets(pessoa.nome);
	
	printf("Digite sua idade: ");
	scanf("%d",&pessoa.idade);

	printf("Digite seu peso: ");
	scanf("%f",&pessoa.peso);

	printf("Digite sua altura: ");
	scanf("%f",&pessoa.altura);
	
	printf("\n Exibindo os dados da pessoa...\n\n");
	
	printf("Nome: %s \n", pessoa.nome);
	printf("Idade: %d \n", pessoa.idade);
	printf("Peso: %.2f \n", pessoa.peso);
	printf("Altura: %.2f \n", pessoa.altura);
	
	return 0;
}