#include <stdio.h>

#define numeroAlunos 15

int main() {
    float notas[numeroAlunos];
    float media = 0.0;
    int i = 0;

    
    while (i < numeroAlunos) {
        printf("Insira a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
        i++;
    }

    
    media /= numeroAlunos;

    
    printf("\nA média geral da turma foi %.2f\n", media);

    return 0;
}


