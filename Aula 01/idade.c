#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int anos, meses, dias;
    int idadeEmDias;

    
    printf("Informe a sua idade expressando em ano, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    
    idadeEmDias = (anos * 365) + (meses * 30) + dias;

    
    printf("A idade em dias é: %d\n", idadeEmDias);

    return 0;
}

