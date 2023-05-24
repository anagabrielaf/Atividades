#include <stdio.h>

int main() {
    int i = 0;
    int n = 5;
    int numeros[n];
    int maior, menor, soma = 0;
    
    
    while (i < n) {
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &numeros[i]);
        i++;
    }
    
    
    maior = menor = numeros[0];
    
    
    i = 0;
    while (i < n) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        soma += numeros[i];
        i++;
    }
    
   
    i = 0;
    while (i < n) {
        printf("%d ", numeros[i]);
        i++;
    }
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", (float)soma/n);
    
    return 0;
}

