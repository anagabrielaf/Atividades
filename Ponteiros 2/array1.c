#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(void) {
    float vet[TAM];
    int i = 0;

    printf("Elementos:\n\n");
    while (i < TAM) {
        vet[i] = (10 + rand() % 100) / 3.27;
        printf("[%.2f] ", vet[i]);
        i++;
    }

    printf("\n\nINFORMACOES DO ARRAY:\n\n");
    i = 0;
    while (i < TAM) {
        printf("%d: %.2f: %p\n", i + 1, vet[i], (void *)&vet[i]);
        i++;
    }

    return EXIT_SUCCESS;
}

