#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int vetor[10];
    int i, maior, menor;
    
  
    for(i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    valores com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];
    
    
    for(i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    printf("\nO maior valor do vetor eh: %d\n", maior);
    printf("O menor valor do vetor eh: %d\n", menor);
    
    
    return 0;
}

