#include <stdio.h>

int main() {
	
    int valores[6];
    
    
    for (int i = 0; i < 6; i++) {
        do {
            printf("Digite o %dº valor par: ", i+1);
            scanf("%d", &valores[i]);
        } while (valores[i] % 2 != 0);
    }
    
    
    printf("\nValores em ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }
    
    return 0;
}

