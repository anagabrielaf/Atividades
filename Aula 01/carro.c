#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int custo_fabrica, custo_distribuidor, custo_imposto, custo_final;

    printf("Informe o custo da sua fábrica do seu carro: ");
    scanf("%d", &custo_fabrica);

    
    custo_distribuidor = (int)(0.28 * custo_fabrica);

    
    custo_imposto = (int)(0.45 * custo_fabrica);

    
    custo_final = custo_fabrica + custo_distribuidor + custo_imposto;

    printf("O custo final ao consumidor é de: %d\n", custo_final);

    return 0;
}

