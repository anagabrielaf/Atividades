#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Restaurante {
    char nome[50];
    char endereco[100];
    float precoMedio;
    char tipoComida[50];
    struct Restaurante *prox;
};

typedef struct Restaurante restaurante;

restaurante *inicio = NULL;

restaurante *novoRestaurante() {
    restaurante *novo = (restaurante *) malloc(sizeof(restaurante));
    if (novo == NULL) {
        printf("Erro: nao foi possivel alocar memoria.\\\\\\\\n");
        return NULL;
    }
    printf("Informe o nome do seu restaurante: ");
    scanf("%s", novo->nome);
    printf("Informe o endereco do seu restaurante: ");
    scanf("%s", novo->endereco);
    printf("Informe o preco medio do seu restaurante: ");
    scanf("%f", &novo->precoMedio);
    printf("Informe o tipo de comida do seu restaurante: ");
    scanf("%s", novo->tipoComida);
    novo->prox = NULL;
    return novo;
}

void inserirRestaurante() {
    restaurante *novo = novoRestaurante();
    if (novo == NULL) {
        return;
    }
    if (inicio == NULL) {
        inicio = novo;
    } else {
        restaurante *atual = inicio;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novo;
    }
}

void listarRestaurantes() {
    if (inicio == NULL) {
        printf("Nenhum restaurante cadastrado.\\\\\\\\n");
    } else {
        printf("Lista de restaurantes cadastrados: \\\\\\\\n");
        restaurante *atual = inicio;
        while (atual != NULL) {
            printf("Nome: %s\\\\\\\\n", atual->nome);
            printf("Endereco: %s\\\\\\\\n", atual->endereco);
            printf("Preco medio: R$ %.2f\\\\\\\\n", atual->precoMedio);
            printf("Tipo de comida: %s\\\\\\\\n", atual->tipoComida);
            printf("\\\\\\\\n");
            atual = atual->prox;
        }
    }
}

int main() {
    int opcao;
    do {
        printf("\\\\\\\\n1 - Incluir novo restaurante\\\\\\\\n");
        printf("2 - Listar restaurantes cadastrados\\\\\\\\n");
        printf("0 - Sair\\\\\\\\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                inserirRestaurante();
                break;
            case 2:
                listarRestaurantes();
                break;
            case 0:
                printf("\\\\\\\\nSaindo...\\\\\\\\n");
                break;
            default:
                printf("\\\\\\\\nOpcao invalida. Tente novamente.\\\\\\\\n");
                break;
        }
    } while (opcao != 0);

    restaurante *atual = inicio;
    while (atual != NULL) {
        restaurante *prox = atual->prox;
        free(atual);
        atual = prox;
    }

    return 0;
}
