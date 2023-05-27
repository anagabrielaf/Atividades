#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int escolha;
    float valor1, valor2, resultado;

    printf("Menu das operações:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");

    printf("Escolha uma operação (1-4): ");
    scanf("%d", &escolha);

    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);

    switch (escolha) {
        case 1:
            resultado = valor1 + valor2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case 4:
            if (valor2 != 0) {
                resultado = valor1 / valor2;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

