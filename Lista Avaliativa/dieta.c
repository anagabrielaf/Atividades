#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Dieta {
    char nome[100];
    float peso_porcao;
    int calorias;
    struct Dieta* proximo;
};

struct Dieta* criarNo(char nome[], float peso_porcao, int calorias) {
    struct Dieta* novoNo = (struct Dieta*)malloc(sizeof(struct Dieta));
    
    strcpy(novoNo->nome, nome);
    novoNo->peso_porcao = peso_porcao;
    novoNo->calorias = calorias;
    novoNo->proximo = NULL;
    
    return novoNo;
}


struct Dieta* encontrarUltimo(struct Dieta* no) {
    if (no == NULL || no->proximo == NULL) {
        return no;
    }
    
    return encontrarUltimo(no->proximo);
}


void inserir(struct Dieta** lista, char nome[], float peso_porcao, int calorias) {
    struct Dieta* novoNo = criarNo(nome, peso_porcao, calorias);
    
    if (*lista == NULL) {
        *lista = novoNo;
    } else {
        struct Dieta* ultimo = encontrarUltimo(*lista);
        ultimo->proximo = novoNo;
    }
}


void imprimirLista(struct Dieta* lista) {
    struct Dieta* atual = lista;
    
    while (atual != NULL) {
        printf("Nome: %s\n", atual->nome);
        printf("A pesagem da porcao: %.2f\n", atual->peso_porcao);
        printf("Quantidade de calorias encontrada: %d\n", atual->calorias);
        printf("\n");
        
        atual = atual->proximo;
    }
}


void liberarLista(struct Dieta** lista) {
    struct Dieta* atual = *lista;
    
    while (atual != NULL) {
        struct Dieta* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    
    *lista = NULL;
}

int main() {
    struct Dieta* lista = NULL;
    
    
    inserir(&lista, "Proteína", 0.0, 00);
    inserir(&lista, "Salada", 0.0, 00);
    inserir(&lista, "Sobremesa", 0.0, 00);
    
    
    imprimirLista(lista);
    
    
    liberarLista(&lista);
    
    return 0;
}

