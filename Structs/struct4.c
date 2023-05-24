#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
} Aluno;

int main() {
    const int numAlunos = 10;
    Aluno* alunos = malloc(numAlunos * sizeof(Aluno));
    Aluno* aprovados = malloc(numAlunos * sizeof(Aluno));
    Aluno* reprovados = malloc(numAlunos * sizeof(Aluno));
    int numAprovados = 0;
    int numReprovados = 0;

    
    printf("=== Dados dos Alunos ===\n");
    for (int i = 0; i < numAlunos; i++) {
        Aluno* aluno = &alunos[i];

        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", aluno->nome);
        printf("Matricula: ");
        scanf("%d", &aluno->matricula);
        printf("Media Final: ");
        scanf("%f", &aluno->mediaFinal);
        printf("\n");

        
        if (aluno->mediaFinal >= 5.0) {
            aprovados[numAprovados] = *aluno;
            numAprovados++;
        } else {
            reprovados[numReprovados] = *aluno;
            numReprovados++;
        }
    }

    // Exibir os dados dos alunos aprovados
    printf("=== Alunos Aprovados ===\n");
    for (int i = 0; i < numAprovados; i++) {
        Aluno* aluno = &aprovados[i];

        printf("Aluno %d\n", i + 1);
        printf("Nome: %s\n", aluno->nome);
        printf("Matricula: %d\n", aluno->matricula);
        printf("Media Final: %.2f\n", aluno->mediaFinal);
        printf("\n");
    }

    
    printf("=== Alunos Reprovados ===\n");
    for (int i = 0; i < numReprovados; i++) {
        Aluno* aluno = &reprovados[i];

        printf("Aluno %d\n", i + 1);
        printf("Nome: %s\n", aluno->nome);
        printf("Matricula: %d\n", aluno->matricula);
        printf("Media Final: %.2f\n", aluno->mediaFinal);
        printf("\n");
    }

    free(alunos);
    free(aprovados);
    free(reprovados);

    return 0;
}

