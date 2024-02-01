#include <stdio.h>
// standard - input - output
// std - i - o
// stdio
#include <stdlib.h>

int main()
{
    // declaração de variáveis
    int idade = 0;
    float peso = 0;
    char sexo;
    char nome [250];

    // solicitando dados do usuário
    printf("Digite seu idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); //limpa o cache de input

    printf("Digite seu sexo (f ou m): ");
    scanf("%c", &sexo);
    
    fflush(stdin); //limpa o cache de input
    
    printf("Digite seu nome: ");
    gets(nome);
    //scanf("%s", &nome);
    //fgets(nome, 250, stdin);

    //limpa a tela
    system("cls || clear");
    
    // exibindo os dados
    printf("Idade: %d \n", idade);
    printf("Peso: %f \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);

    return 0;
}
