#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int escolha;
    float valor1, valor2, resultado;

    printf("Menu das opera��es:\n");
    printf("1. Soma\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");

    printf("Escolha uma opera��o (1-4): ");
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
            printf("Resultado da subtra��o: %.2f\n", resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("Resultado da multiplica��o: %.2f\n", resultado);
            break;
        case 4:
            if (valor2 != 0) {
                resultado = valor1 / valor2;
                printf("Resultado da divis�o: %.2f\n", resultado);
            } else {
                printf("Erro: Divis�o por zero!\n");
            }
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }

    return 0;
}

