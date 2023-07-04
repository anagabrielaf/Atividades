#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'a';

    int *ponteiro_inteiro = &inteiro;
    float *ponteiro_real = &real;
    char *ponteiro_caractere = &caractere;

    printf("Antes da modificacao:\\n");
    printf("inteiro: %d, real: %f, caractere: %c\\n", inteiro, real, caractere);

    *ponteiro_inteiro = 20;
    *ponteiro_real = 1.23;
    *ponteiro_caractere = 'b';

    printf("Depois da modificacao:\\n");
    printf("inteiro: %d, real: %f, caractere: %c\\n", inteiro, real, caractere);

    return 0;
