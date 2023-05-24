#include <stdio.h>

#define TAM 10

int main() {
    int vetor[TAM], i;

    
    for (i = 0; i < TAM; i++) {
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    for (i = 0; i < TAM; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
   printf("Vetor modificado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    
    
    return 0;
}

