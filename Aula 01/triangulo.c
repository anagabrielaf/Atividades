#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int base, altura, area;

    printf("Informe a base do ret�ngulo: ");
    scanf("%d", &base);

    printf("Informe a altura do ret�ngulo: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A �rea do ret�ngulo � dada por: %d\n", area);
    
    
    

    return 0;
}

