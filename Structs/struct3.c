#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
} Aluno;

void obter_dados_aluno(Aluno *aluno) {
    printf("\nDigite a matricula do aluno: ");
    scanf("%d", &aluno->matricula);
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno->nome);
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota da prova %d do aluno: ", i + 1);
        scanf("%f", &aluno->notas[i]);
    }
}

float calcular_media(float *notas) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += notas[i];
    }
    return soma / 3;
}

void imprimir_dados_aluno(Aluno aluno) {
    printf("\nMatricula: %d", aluno.matricula);
    printf("\nNome: %s", aluno.nome);
    for (int i = 0; i < 3; i++) {
        printf("\nNota da prova %d: %.2f", i + 1, aluno.notas[i]);
    }
}

int main() {
    const int num_alunos = 5;
    Aluno alunos[num_alunos];

    
    for (int i = 0; i < num_alunos; i++) {
        printf("\n--- Aluno %d ---", i + 1);
        obter_dados_aluno(&alunos[i]);
    }

    
    float maior_nota1 = alunos[0].notas[0];
    int indice_maior_nota1 = 0;
    for (int i = 1; i < num_alunos; i++) {
        if (alunos[i].notas[0] > maior_nota1) {
            maior_nota1 = alunos[i].notas[0];
            indice_maior_nota1 = i;
        }
    }

    
    float maior_media = calcular_media(alunos[0].notas);
    int indice_maior_media = 0;
    for (int i = 1; i < num_alunos; i++) {
        float media = calcular_media(alunos[i].notas);
        if (media > maior_media) {
            maior_media = media;
            indice_maior_media = i;
        }
    }

    float menor_media = calcular_media(alunos[0].notas);
    int indice_menor_media = 0;
    for (int i = 1; i < num_alunos; i++) {
        float media = calcular_media(alunos[i].notas);
        if (media < menor_media) {
            menor_media = media;
            indice_menor_media = i;
        }
    }

   
    printf("\n--- Dados dos Alunos ---");
    for (int i = 0; i < num_alunos; i++) {
        printf("\n\n=== Aluno %d ===", i + 1);
        imprimir_dados_aluno(alunos[i]);
        float media = calcular_media(alunos[i].notas);
        if (


