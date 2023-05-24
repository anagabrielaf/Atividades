#include <stdio.h>

void apareceArray(int *array, int tam);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);

    apareceArray(array, size);

    return 0;
}

void apareceArray(int *array, int tam) {
    int *ptr = array;
    while (ptr < array + tam) {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");
}

