#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	struct ficha_aluno {
		char nome[200];
		int idade;
	};
	
	struct ficha_aluno aluno;
	
	printf("Digite o nome do aluno: ");
	gets(aluno.nome);
	
	printf("Digite a idade do aluno: ");
	scanf("%d",&aluno.idade);
	
	printf("\n Exibindo os dados do aluno...\n\n");
	
	printf("Nome do aluno: %s \n", aluno.nome);
	printf("Idade do aluno: %d \n", aluno.idade);
	
	return 0;
}