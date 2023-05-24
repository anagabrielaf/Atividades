#include <stdio.h>

void dobroDaSoma(int *a, int *b);

int main() {
    int v1, v2;
    
    printf("informe o v1 (valor inteiro 1): ");
    scanf("%d", &v1);
    
    printf("informe o v2 (valor inteiro 2): ");
    scanf("%d", &v2);
    
    dobroDaSoma(&v1, &v2);
    
    printf("o valor de A: %d\n", v1);
    printf("o valor de B: %d\n", v2);
    
    return 0;
}

void dobroDaSoma(int *a, int *b) {
    *a = 2 * (*a);
    *b = 2 * (*b);
}

