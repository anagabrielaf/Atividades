#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    int codigo;
    int quantidade;
    float valorTotal = 0.0;

    printf("Cardápio da Lanchonete:\n");
    printf("1 - Cachorro Quente: R$ 10.10\n");
    printf("2 - Bauru Simples: R$ 8.30\n");
    printf("3 - Bauru c/ovo: R$ 8.50\n");
    printf("4 - Hamburguer: R$ 12.50\n");
    printf("5 - Cheeseburger: R$ 13.25\n");

    printf("Digite o código do item: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 1:
            valorTotal = 10.10 * quantidade;
            break;
        case 2:
            valorTotal = 8.30 * quantidade;
            break;
        case 3:
            valorTotal = 8.50 * quantidade;
            break;
        case 4:
            valorTotal = 12.50 * quantidade;
            break;
        case 5:
            valorTotal = 13.25 * quantidade;
            break;
        default:
            printf("Código do item inválido!\n");
            return 0;
    }

    printf("Valor total a ser pago: R$ %.2f\n", valorTotal);

    return 0;
}

