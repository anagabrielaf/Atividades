#include <stdio.h>

float calcularPrecoFinal(float valor, char estado) {
    float precoFinal;
    switch (estado) {
        case 'A':
        case 'a':
            precoFinal = valor * 1.1;  // Imposto de 10%
            break;
        case 'B':
        case 'b':
            precoFinal = valor * 1.15;  // Imposto de 15%
            break;
        case 'C':
        case 'c':
            precoFinal = valor * 1.07;  // Imposto de 7%
            break;
        case 'D':
        case 'd':
            precoFinal = valor * 1.12;  // Imposto de 12%
            break;
        default:
            precoFinal = -1;  
    }
    return precoFinal;
}

int main() {
    float valor;
    char estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite o estado de destino (A, B, C ou D): ");
    scanf(" %c", &estado);

    float precoFinal = calcularPrecoFinal(valor, estado);
    if (precoFinal == -1) {
        printf("Estado de destino inválido!\n");
    } else {
        printf("Preço final do produto: R$ %.2f\n", precoFinal);
    }

    return 0;
}

