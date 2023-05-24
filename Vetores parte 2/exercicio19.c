#include <stdio.h>

#define TAM 50

int main() {
    int vetor[TAM], i;

    
    for (i = 0; i < TAM; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    
    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

