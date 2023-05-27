#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMANHO 1000

struct usuario {
    int id; 
    char nome[100];
    char email[100];
    char sexo[20]; 
    char endereco[200];
    double altura; 
    int vacina; 
};

int qtdUsuarios = 0;

void usuarioIncluidos(struct usuario *usuarios) {
    if (qtdUsuarios < TAMANHO) {
        printf("\n--- Inclusao do Usuario ---\n");
        printf("\nDigite o nome completo do usuário: ");
        fflush(stdin);
        fgets(usuarios[qtdUsuarios].nome, 100, stdin);
        usuarios[qtdUsuarios].nome[strcspn(usuarios[qtdUsuarios].nome, "\n")] = '\0'; // Remove o caractere de nova linha
        
        printf("Digite o email do usuario: ");
        fflush(stdin);
        fgets(usuarios[qtdUsuarios].email, 100, stdin);
        usuarios[qtdUsuarios].email[strcspn(usuarios[qtdUsuarios].email, "\n")] = '\0';
        
        printf("Digite o sexo do usuario (masculino ou feminino): ");
        fflush(stdin);
        fgets(usuarios[qtdUsuarios].sexo, 20, stdin);
        usuarios[qtdUsuarios].sexo[strcspn(usuarios[qtdUsuarios].sexo, "\n")] = '\0';
        
        printf("Digite o endereco do usuario: ");
        fflush(stdin);
        fgets(usuarios[qtdUsuarios].endereco, 200, stdin);
        usuarios[qtdUsuarios].endereco[strcspn(usuarios[qtdUsuarios].endereco, "\n")] = '\0';
        
        printf("Digite a altura do usuario (entre 1 e 2 metros): ");
        scanf("%lf", &usuarios[qtdUsuarios].altura);
        while (usuarios[qtdUsuarios].altura < 1 || usuarios[qtdUsuarios].altura > 2) { 
            printf("Altura nao correspondida. Digite um valor entre 1 e 2 metros: ");
            scanf("%lf", &usuarios[qtdUsuarios].altura);
        }
        
        printf("O usuario foi vacinado? (1 - Sim / 0 - Nao): ");
        scanf("%d", &usuarios[qtdUsuarios].vacina);
        while (usuarios[qtdUsuarios].vacina != 0 && usuarios[qtdUsuarios].vacina != 1) { 
            printf("Resposta invalida. O usuario foi vacinado? (1 - Sim / 0 - Nao): ");
            scanf("%d", &usuarios[qtdUsuarios].vacina);
        }
        
        usuarios[qtdUsuarios].id = rand() % 1000000; 
        printf("\nUsuario cadastrado com sucesso! ID do usuario: %d\n", usuarios[qtdUsuarios].id);
        qtdUsuarios++;
    } else {
        printf("\nNao foi possivel incluir o usuario. O limite de usuarios ja foi atingido.\n");
    }
}

void editarUsuario(struct usuario *usuarios) {
    printf("\n--- Edicao de Usuario ---\n");
    int idUsuario, indiceUsuario = -1;
    printf("Informe o ID do usuario a ser editado: ");
    scanf("%d", &idUsuario);

    for (int i = 0; i < qtdUsuarios; i++) {
        if (usuarios[i].id == idUsuario) {
            indiceUsuario = i;
            break;
        }

