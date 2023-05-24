#include <stdio.h>

struct Aluno {
    char nome[100];
    int matricula;
    char curso[100];
};

int main() {
    struct Aluno {
        char nome[100];
        int matricula;
        char curso[100];
    } alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Informe o nome aluno x: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Informe o numero de matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa o buffer do teclado

        printf("Informe o curso: ");
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);

        printf("\n");
    }

    printf("Dados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s", alunos[i].nome);
        printf("Numero de matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
        printf("\n");
    }

    return 0;
}

