#include <stdio.h>

    int main() {
    	
    int valores[6], i = 0;
    
    
    while(i < 6) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valores[i]);
        i++;
    }
    
    printf("Valores lidos: ");
    
    i = 0;
    while(i < 6) {
        printf("%d ", valores[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}
  
