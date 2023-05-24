#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int codigoPrato, codigoSobremesa, codigoBebida;
    int caloriasPrato = 0, caloriasSobremesa = 0, caloriasBebida = 0;
    int totalCalorias = 0;

    printf("Opções de Prato:\n");
    printf("1 - Vegetariano (180 cal)\n");
    printf("2 - Peixe (230 cal)\n");
    printf("3 - Frango (250 cal)\n");
    printf("4 - Carne (350 cal)\n");

    printf("Digite o código do prato: ");
    scanf("%d", &codigoPrato);

    printf("Opções de Sobremesa:\n");
    printf("1 - Abacaxi (75 cal)\n");
    printf("2 - Sorvete diet (110 cal)\n");
    printf("3 - Mouse diet (170 cal)\n");
    printf("4 - Mouse chocolate (200 cal)\n");

    printf("Digite o código da sobremesa: ");
    scanf("%d", &codigoSobremesa);

    printf("Opções de Bebida:\n");
    printf("1 - Chá (20 cal)\n");
    printf("2 - Suco de laranja (70 cal)\n");
    printf("3 - Suco de melão (100 cal)\n");
    printf("4 - Refrigerante diet (65 cal)\n");

    printf("Digite o código da bebida: ");
    scanf("%d", &codigoBebida);

    switch (codigoPrato) {
        case 1:
            caloriasPrato = 180;
            break;
        case 2:
            caloriasPrato = 230;
            break;
        case 3:
            caloriasPrato = 250;
            break;
        case 4:
            caloriasPrato = 350;
            break;
        default:
            printf("Código do prato inválido!\n");
            return 0;
    }

    switch (codigoSobremesa) {
        case 1:
            caloriasSobremesa = 75;
            break;
        case 2:
            caloriasSobremesa = 110;
            break;
        case 3:
            caloriasSobremesa = 170;
            break;
        case 4:
            caloriasSobremesa = 200;
            break;
        default:
            printf("Código da sobremesa inválido!\n");
            return 0;
    }

    switch (codigoBebida) {
        case 1:
            caloriasBebida = 20;
            break;
        case 2:
            caloriasBebida = 70;
            break;
        case 3:
            caloriasBebida = 100;
            break;
        case 4:
            caloriasBebida = 65;
            break;
        default:
            printf("Código da bebida inválido!\n");
            return 0;
    }

    totalCalorias = caloriasPrato + caloriasSobremesa + caloriasBebida;
    printf("Total de calorias da refeição: %d cal\n", totalCalorias);

    return 0;
}

