#include <stdio.h>

void operacao(int a, int b);

int main() {
    int v1, v2;
    
    printf("insira o primeiro valor: ");
    scanf("%d", &v1);
    
    printf("insira o segundo valor: ");
    scanf("%d", &v2);
    
    operacao(v1, v2);
    
    return 0;
}

void operacao(int a, int b) {
    int resultado;
    int operador;
    
    printf("Resolva a operacao de sua preferencia:\n");
    printf("soma\n");
    printf("subtracao\n");
    printf("multiplicacao\n");
    printf("divisao\n");
    scanf("%d", &operador);
    
    switch (operador) {
        case 1:
            resultado = a + b;
            printf("a soma de %d e %d eh: %d\n", a, b, resultado);
            break;
        case 2:
            resultado = a - b;
            printf("a subtracao de %d e %d eh: %d\n", a, b, resultado);
            break;
        case 3:
            resultado = a * b;
            printf("a multiplicacao de %d e %d eh: %d\n", a, b, resultado);
            break;
        case 4:
            if (b != 0) {
                resultado = a / b;
                printf("a divisao de %d por %d eh: %d\n", a, b, resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("opcao invalida!\n");
            break;
    }
}

