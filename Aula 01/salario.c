#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float salarioAtual, percentualReajuste, novoSalario;

    printf("Informe o seu sal�rio: ");
    scanf("%f", &salarioAtual);
    

    printf("Informe o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    

    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);
    

    printf("O novo sal�rio � de: %.2f\n", novoSalario);

    return 0;
}

