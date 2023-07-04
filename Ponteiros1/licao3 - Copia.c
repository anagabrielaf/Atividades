#include <stdio.h>

int main() {
    int variavel1;
    int variavel2;

    printf("Digite o valor da variavel1: ");
    scanf("%d", &variavel1);

    printf("Digite o valor da variavel2: ");
    scanf("%d", &variavel2);

    int *ponteiro1 = &variavel1;
    int *ponteiro2 = &variavel2;

    if (ponteiro1 > ponteiro2) {
        printf("Conteudo do endereco de ponteiro1: %d\\n", *ponteiro1);
    } else {
        printf("Conteudo do endereco de ponteiro2: %d\\n", *ponteiro2);
    }

    return 0;
}
