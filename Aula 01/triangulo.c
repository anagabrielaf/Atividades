#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int base, altura, area;

    printf("Informe a base do retângulo: ");
    scanf("%d", &base);

    printf("Informe a altura do retângulo: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A área do retângulo é dada por: %d\n", area);
    
    
    

    return 0;
}

