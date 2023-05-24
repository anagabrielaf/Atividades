#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int i, maior, menor, posMaior, posMenor;
    int valores[5];

    
    printf("Digite 5 valores inteiros:\n");
    scanf("%d", &valores[0]);
    maior = valores[0];
    menor = valores[0];
    posMaior = posMenor = 0;

    
    for(i = 1; i < 5; i++) {
        scanf("%d", &valores[i]);
        if(valores[i] > maior) {
            maior = valores[i];
            posMaior = i;
        }
        if(valores[i] < menor) {
            menor = valores[i];
            posMenor = i;
        }
    }

    
    printf("Valores lidos: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\nMaior valor: %d, na posicao %d\n", maior, posMaior);
    printf("Menor valor: %d, na posicao %d\n", menor, posMenor);

    return 0;
}

