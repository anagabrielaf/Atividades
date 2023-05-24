#include <stdio.h>
#include <locale.h>

int numMaior(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero1, numero2;

    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);

    printf("Informe o segundo número: ");
    scanf("%d", &numero2);

    int maior = numMaior(numero1, numero2);

    printf("O maior número é: %d\n", maior);

    return 0;
}

