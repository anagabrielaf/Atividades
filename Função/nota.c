#include <stdio.h>

void calculoMedia(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3.0;
    printf("Média: %.2f\n", media);
}

int main() {
    int numEstudantes;
    printf("Informe o numero de estudantes: ");
    scanf("%d", &numEstudantes);

    int i = 0;
    while (i < numEstudantes) {
        printf("\nEstudante %d\n", i + 1);
        float nota1, nota2, nota3;
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);
        printf("Digite a nota da terceira prova: ");
        scanf("%f", &nota3);
        calculoMedia(nota1, nota2, nota3);
        i++;
    }

    return 0;
}

