#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    int vetor[10];
    int i, maior = 0, posicao = 0;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    
    printf("\nO vetor digitado foi: [");
    for(i = 0; i < 10; i++) {
        printf("%d", vetor[i]);
        if(i < 9) {
            printf(", ");
        }
    }
    printf("]\n");
    
    
    for(i = 0; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    

    printf("\nO maior valor do vetor é de: %d\n", maior);
    printf("Ele está na posição %d do vetor.\n", posicao+1);
    
    return 0;
}

