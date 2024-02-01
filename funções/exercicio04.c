
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 2

void limpaTela() {
    fflush(stdin);
    system("cls || clear");
}

int somar(int numero[]) {
    int resultado = 0, i;
    for (i = 0; i < TAM; i++) {
        resultado += numero[i];
    }
    return resultado;
}

int subtrair(int numero[]) {
    int resultado = numero[0], i;
    for (i = 1; i < TAM; i++) {
        resultado -= numero[i];
    }
    return resultado;
}

int multiplicar(int numero[]) {
    int resultado = 1, i;
    for (i = 0; i < TAM; i++) {
        resultado *= numero[i];
    }
    return resultado;
}

float dividir(int numero[]) {
    float resultado = numero[0];
    int i;
    for (i = 1; i < TAM; i++) {
        resultado /= numero[i];
    }
    return resultado;
}

int main() {

    setlocale(LC_ALL, "portuguese");
 
    int numero[TAM], i, soma, subtracao, multiplicacao;
    float divisao;
   
    for (i = 0; i < TAM; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d",&numero[i]);
        limpaTela();
    }
   
    soma = somar(numero);
    subtracao = subtrair(numero);
    multiplicacao = multiplicar(numero);
    divisao = dividir(numero);
       
    for (i = 0; i < TAM; i++) {
        printf("%dº numero: %d \n", i + 1, numero[i]);
    }
    printf("Soma: %d \n", soma);
    printf("Subtração: %d \n", subtracao);
    printf("Multiplicação: %d \n", multiplicacao);
    printf("Divisão: %.2f \n", divisao);
   
    return 0;
}