#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

    
    int vetor[8], x, y, soma;
    int i = 0;
    
    
    while(i < 8) {
        printf("Insira o valor da posição %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        i++;
    }
    
    printf("\nDigite o valor de X (entre 1 e 8): ");
    scanf("%d", &x);
 
    
    printf("Digite o valor de Y (entre 1 e 8): ");
    scanf("%d", &y);
    
     
    if(x < 1 || x > 8 || y < 1 || y > 8) {
        printf("\nPosições X e Y devem estar entre 1 e 8!\n");
        return 0;
    }
    
    
    soma = vetor[x-1] + vetor[y-1];
    
    printf("\nSoma dos valores nas posições %d e %d: %d\n", x, y, soma);
    
    
    return 0;
}
