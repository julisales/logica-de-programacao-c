#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct info_aluno {
	int turma;
	char nome[200];
	int idade;
	float notas[2];
	float media;
	char resultado[50];
};

struct info_professor {
	char nome[200];
	char disciplinas[2][200];
	int turmas[2];
};

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	int i, j;

	struct info_aluno aluno[3];
	struct info_professor professor[2];
	
	for(int = 0; i < 3; i++){
		printf("Informações do %dº aluno: \n",i + 1);
		
		printf("Número da turma: ");
		scanf("%d", &aluno[i].turma);
		
		fflush(stdin);
		
		printf("Nome: ");
		gets(aluno[i].nome);
		
		printf("Idade: ");
		scanf("%d", &aluno[i].idade);
		
		for(j = 0; j < 2; j++){
			printf("%dº nota: ", j + 1);
			scanf("%f", &aluno[i].notas[j]);
			
			soma += aluno[i].notas[j];
		}
		
		aluno[i].media = soma / j;
		strcpy(aluno[i].resultado, (aluno[i].media >=7) ? "Aprovado :)!" : "Reprovado! :(");
		
		soma = 0;
		
		system("cls || clear");
	}
	
	for(i = 0; i < 2; i++){
		printf("Informações do %dº professor: \n",i + 1);
		
		printf("Nome: ");
		gets(professor[i].nome);
		
	}
	return 0;
}
