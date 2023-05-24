#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float numeros[10], somaPositivos = 0;
    int i = 0, negativos = 0;
    
    printf("Digite 10 números reais:\n");
    
    while (i < 10) {
        scanf("%f", &numeros[i]);
        
        if (numeros[i] < 0) {
            negativos++;
        } else {
            somaPositivos += numeros[i];
        }
        
        i++;
    }
    
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);
    
    return 0;
}

