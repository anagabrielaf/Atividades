#include <stdio.h>
#include <math.h>

void calcularQuadradoERaiz(float numero) {
    if (numero > 0) {
        float quadrado = numero * numero;
        float raiz = sqrt(numero);
        printf("Numero ao quadrado: %.2f\n", quadrado);
        printf("Raiz quadrada do numero: %.2f\n", raiz);
    } else {
        printf("O numero digitado não eh positivo.\n");
    }
}

int main() {
    float numero;
    printf("Informe um numero: ");
    scanf("%f", &numero);
    calcularQuadradoERaiz(numero);
    return 0;
}

