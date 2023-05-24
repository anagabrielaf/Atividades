#include <stdio.h>

int main() {
	
    int valores[6];
    
    
    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &valores[i]);
    }
    
    
    printf("\nValores em ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }
    
    return 0;
}

