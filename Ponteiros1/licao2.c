#include <stdio.h>

int main() {
    int variavel1 = 10;
    int variavel2 = 20;

    int *ponteiro1 = &variavel1;
    int *ponteiro2 = &variavel2;

    if (ponteiro1 > ponteiro2) {
        printf("Endereco de ponteiro1: %p\\n", ponteiro1);
    } else {
        printf("Endereco de ponteiro2: %p\\n", ponteiro2);
    }

    return 0;
}
