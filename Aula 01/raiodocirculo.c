#include <stdio.h>
#include <locale.h>
#define PI 3.14159


int main() {
	setlocale(LC_ALL, "Portuguese");
	float raio, area;

    printf("Informe o raio do c�rculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A �rea do c�rculo encontrada �  de: %.2f\n", area);

	return 0;
}
