#include <stdio.h>

#define TAM 5

void dobroValor(int *array, int tam);

int main() {
    int array[TAM];

    printf("Digite %d valores inteiros:\n", TAM);
    int i = 0;
    while (i < TAM) {
        scanf("%d", &array[i]);
        i++;
    }

    dobroValor(array, TAM);

    printf("Dobro dos valores:\n");
    int *ptr = array;
    i = 0;
    while (i < TAM) {
        printf("%d ", *ptr);
        ptr++;
        i++;
    }
    printf("\n");

    return 0;
}

void dobroValor(int *array, int tam) {
    int *ptr = array;
    int i = 0;
    while (i < tam) {
        *ptr *= 2;
        ptr++;
        i++;
    }
}



