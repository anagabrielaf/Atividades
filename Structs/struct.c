#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    struct {
        char nome[100];
        int idade;
        char endereco[100];
    } pessoa;

    printf("Informe o  nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    printf("Informe a  idade: ");
    scanf("%d", &pessoa.idade);
    getchar(); 

    printf("Informe o endereco: ");
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);

    return 0;
}


