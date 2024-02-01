#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha_livro {
        char nome[200], autor[200], categoria[200];
        float preco;
        
    };

    struct ficha_livro livro[3];

    int i;

    for(i = 0; i < 3; i++){
        printf("Digite as informações do %dº livro: \n", i + 1);

        printf("Nome: ");
        gets(livro[i].nome);

        printf("Autor: ");
        gets(livro[i].autor);

        printf("Categoria: ");
        gets(livro[i].categoria);

        printf("Preço: ");
        scanf("%f", &livro[i].preco);

        fflush(stdin);
        system("cls || clear");
    }

    for(i = 0; i < 3; i++){
        printf("Informações do %dº livro: \n", i + 1);

        printf("Nome: %s \n", livro[i].nome);
        printf("Autor: %s \n", livro[i].autor);
        printf("Categoria %s \n", livro[i].categoria);
        printf("Preço: %.2f \n \n", livro[i].preco);
    }
     
    return 0;
}