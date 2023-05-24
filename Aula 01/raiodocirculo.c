#include <stdio.h>
#include <locale.h>
#define PI 3.14159


int main() {
	setlocale(LC_ALL, "Portuguese");
	float raio, area;

    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área do círculo encontrada é  de: %.2f\n", area);

	return 0;
}
