#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

typedef struct node {
    Produto produto;
    struct node *prox;
} Node;

Node *criaLista() {
    return NULL;
}

void adicionaProduto(Node **head, Produto produto) {
    Node *novo = (Node*) malloc(sizeof(Node));
    novo->produto = produto;
    novo->prox = *head;
    *head = novo;
}

void imprimeRelatorio(Node *head) {
    printf("Codigo | Descricao | Quantidade | Valor\\n");
    while (head != NULL) {
        printf("%d | %s | %d | %.2f\\n", head->produto.codigo, head->produto.descricao, head->produto.quantidade, head->produto.valor);
        head = head->prox;
    }
}

void pesquisaProduto(Node *head, int codigo) {
    while (head != NULL) {
        if (head->produto.codigo == codigo) {
            printf("Codigo | Descricao | Quantidade | Valor\\n");
            printf("%d | %s | %d | %.2f\\n", head->produto.codigo, head->produto.descricao, head->produto.quantidade, head->produto.valor);
            return;
        }
        head = head->prox;
    }
    printf("Produto nao encontrado\\n");
}

void removeProduto(Node **head, int codigo) {
    Node *ant = NULL;
    Node *atual = *head;
    while (atual != NULL) {
        if (atual->produto.codigo == codigo) {
            if (ant == NULL) {
                *head = atual->prox;
            } else {
                ant->prox = atual->prox;
            }
            free(atual);
            printf("Produto removido\\n");
            return;
        }
        ant = atual;
        atual = atual->prox;
    }
    printf("Produto nao encontrado\\n");
}

int main() {
    Node *lista = criaLista();
    int opcao;
    do {
        printf("Selecione uma opcao:\\n");
        printf("1. Cadastrar produto\\n");
        printf("2. Consultar produtos\\n");
        printf("3. Inserir relatorio de produtos\\n");
        printf("4. Cancelar produto\\n");
        printf("0. Sair\\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: {
                Produto produto;
                printf("Insira o codigo do produto: ");
                scanf("%d", &produto.codigo);
                printf("Insira a descricao do produto: ");
                scanf("%s", produto.descricao);
                printf("Insira a quantidade do produto: ");
                scanf("%d", &produto.quantidade);
                printf("Insira o valor do produto: ");
                scanf("%f", &produto.valor);
                adicionaProduto(&lista, produto);
                printf("Produto cadastrado com sucesso\\n");
                break;
            }
            case 2: {
                int codigo;
                printf("Insira o codigo do produto: ");
                scanf("%d", &codigo);
                pesquisaProduto(lista, codigo);
                break;
            }
            case 3: {
                imprimeRelatorio(lista);
                break;
            }
            case 4: {
                int codigo;
                printf("Insira o codigo do produto: ");
                scanf("%d", &codigo);
                removeProduto(&lista, codigo);
                break;
            }
            case 0: {
                printf("Saindo...\\n");
                break;
            }
            default: {
                printf("Opcao invalida\\n");
                break;
            }
        }
    } while (opcao != 0);
    return 0;
}

