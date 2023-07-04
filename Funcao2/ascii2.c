#include <stdio.h>

void imprimeTabelaASCII(){
    printf("Codigo Decimal | Codigo Hexa | Caracter\\n");
    for(int i = 0; i < 128; i++){
        printf("%14d | %11x | %c\\n", i, i, i);
    }
}

int main(){
    imprimeTabelaASCII();
    return 0;
}

