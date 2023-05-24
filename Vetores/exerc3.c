#include <stdio.h>
#include <locale.h>
    int main() {
    setlocale(LC_ALL,"Portuguese");
    float numeros[10], quadrados[10];
    int i;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &numeros[i]);
        quadrados[i] = numeros[i] * numeros[i];
    }
    printf("\nNúmeros digitados: ");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\nQuadrados dos números: ");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", quadrados[i]);
    }
    printf("\n");
    
    return 0;
}
