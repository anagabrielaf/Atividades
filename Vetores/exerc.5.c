#include <stdio.h>
#include <locale.h>

    int main() {
     setlocale(LC_ALL, "Portuguese");
    int vetor[10];
    int i = 0, cont_pares = 0;
    
    
    while(i < 10) {

        printf("Insira um valor para a posição %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        
       
        cont_pares += vetor[i] % 2 == 0;
        
        i++;
    }
    
    
    printf("\nO vetor possui %d valores pares.\n", cont_pares);
    
    return 0;
}


