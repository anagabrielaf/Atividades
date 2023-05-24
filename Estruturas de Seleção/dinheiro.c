#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    double valor;
    int notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas1, moedas50, moedas25, moedas10, moedas5, moedas1cent;

    
    printf("Digite o valor monetário: ");
    scanf("%lf", &valor);

    
    int centavos = valor * 100;

    
    notas100 = centavos / 10000;
    centavos %= 10000;

    notas50 = centavos / 5000;
    centavos %= 5000;

    notas20 = centavos / 2000;
    centavos %= 2000;

    notas10 = centavos / 1000;
    centavos %= 1000;

    notas5 = centavos / 500;
    centavos %= 500;

    notas2 = centavos / 200;
    centavos %= 200;

    moedas1 = centavos / 100;
    centavos %= 100;

    moedas50 = centavos / 50;
    centavos %= 50;

    moedas25 = centavos / 25;
    centavos %= 25;

    moedas10 = centavos / 10;
    centavos %= 10;

    moedas5 = centavos / 5;
    centavos %= 5;

    moedas1cent = centavos;

   
    printf("Notas de R$100: %d\n", notas100);
    printf("Notas de R$50: %d\n", notas50);
    printf("Notas de R$20: %d\n", notas20);
    printf("Notas de R$10: %d\n", notas10);
    printf("Notas de R$5: %d\n", notas5);
    printf("Notas de R$2: %d\n", notas2);
    printf("Moedas de R$1: %d\n", moedas1);
    printf("Moedas de R$0.50: %d\n", moedas50);
    printf("Moedas de R$0.25: %d\n", moedas25);
    printf("Moedas de R$0.10: %d\n", moedas10);
    printf("Moedas de R$0.05: %d\n", moedas5);
    printf("Moedas de R$0.01: %d\n", moedas1cent);

    return 0;
}

