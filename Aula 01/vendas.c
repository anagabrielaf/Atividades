#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num_carros;
    float valor_vendas, salario_fixo, valor_porcarro, salario_final;

    printf("Informe o n�mero de carros vendidos: ");
    scanf("%d", &num_carros);

    printf("Informe o valor total das vendas: ");
    scanf("%f", &valor_vendas);

    printf("Informe o sal�rio fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Informe o valor recebido por carro vendido: ");
    scanf("%f", &valor_porcarro);

    
    salario_final = salario_fixo + (valor_porcarro * num_carros) + (0.05 * valor_vendas);

    printf("O sal�rio final do vendedor � de: %.2f\n", salario_final);

    return 0;
}

