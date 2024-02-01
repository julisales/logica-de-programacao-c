#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade, mulheres = 0, quantidade = 0, opcao, maior_idade = 0, menor_idade = 999;
    float salario, soma, media_salarial;
    char sexo;

    do
    {
        printf("Digite 1 para adicionar uma pessoa\n");
        printf("Digite 2 para sair e exibir resultados\n");
        scanf("%d", &opcao);

        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("Idade: ");
            scanf("%d", &idade);

            fflush(stdin);

            printf("Sexo (F ou M): ");
            scanf("%c", &sexo);

            printf("Salário: ");
            scanf("%f", &salario);

            sexo = toupper(sexo);

            soma += salario;

            if (opcao == 1)
            {
                quantidade++;
            }

            media_salarial = soma / quantidade;

            maior_idade = maior_idade > idade ? maiorIdade : idade;
            menor_idade = menor_idade < idade ? menor_idade : idade;

            if (sexo == 'F' && salario >= 5.000)
            {
                mulheres++;
            }
            break;

        case 2:

            printf("Média Salarial: %.2f \n", media_salarial);
            printf("Menor idade: %d \n", menor_idade);
            printf("Maior idade: %d \n", maior_idade);
            printf("Quantidade de mulheres com salário acima de R$5.000,00: %d", mulheres);

            break;

        default:

            printf("Código inválido!");
            sleep(3);
            system("cls || clear");
        }

    } while (opcao != 2);

    return 0;
}
