#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho (){
    ("\n==========================\n");
    ("\tSENAI - BA\n");
    ("\n==========================\n");
}

void limpartela (){
    system("cls || clear");
}

int main ()
{
    setlocale(LC_ALL, "portuguese");

    char nome[200];
    int idade;

    cabecalho();

    printf("Digite seu nome: ");
    gets(nome);

    limpartela();

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    limpartela();

    cabecalho();

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);

    return 0;
}