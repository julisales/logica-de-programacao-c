#inc
lude <stdio.h>

int main()
{
    int codigo, idade, total_pessoas = 0, total_salario_acima_5000 = 0;
    char sexo;
    float salario, soma_salarios = 0;
    int maior_idade = 0, menor_idade = 999;

    while (1)
    {
        printf("Digite o codigo (1 para Adicionar Pessoa, 2 para Sair): ");
        scanf("%d", &codigo);

        if (codigo == 1)
        {
            printf("Digite a idade: ");
            scanf("%d", &idade);

            //if 12 > 0
            //if 30 > 0
            //if 40 > 0                                                  
            //maior idade = idade;

            if (idade > maior_idade)
            {
                maior_idade = idade;
            }

            // if 18 < 999
            //menor idade = 18;
            if (idade < menor_idade)
            {
                menor_idade = idade;
            }

            printf("Digite o sexo (M/F): ");
            scanf(" %c", &sexo);

            printf("Digite o salario: ");
            scanf("%f", &salario);

            if (sexo == 'F' && salario > 5.000)
            {
                total_salario_acima_5000++;
            }

            soma_salarios += salario;
            total_pessoas++;
        }
        else if (codigo == 2)
        {
            if (total_pessoas > 0)
            {
                float media_salario = soma_salarios / total_pessoas;
                printf("Media de salario do grupo: %.3f\n", media_salario);
                printf("Maior idade do grupo: %d\n", maior_idade);
                printf("Menor idade do grupo: %d\n", menor_idade);
                printf("Quantidade de mulheres com salario acima de 5.000: %d\n", total_salario_acima_5000);
            }
            else
            {
                printf("Nenhum dado foi inserido.\n");
            }
            break;


















            
        }
        else
        {
            printf("Codigo invalido. Por favor, digite 1 para Adicionar Pessoa ou 2 para Sair.\n");
        }
    }

    return 0;
}
