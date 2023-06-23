#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    double matematica, fisica, quimica, media;
    printf("Insira a nota de Matemática: ");
    scanf("%lf", &matematica); 
    printf("Insira a nota de Fisica: ");
    scanf("%lf", &fisica);
    printf("Insira a nota de Quimica: ");
    scanf("%lf", &quimica);
    media = (matematica + fisica + quimica) / 3.0;
    FILE *arquivo = fopen("notas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\\n"); 
        return 1;
    }
    fprintf(arquivo, "Respectivas notas do aluno:\\n");
    fprintf(arquivo, "Matemática: %.2lf\\n", matematica); 
    fprintf(arquivo, "Física: %.2lf\\n", fisica);
    fprintf(arquivo, "Química: %.2lf\\n", quimica);
    fprintf(arquivo, "Média: %.2lf\\n", media);
    fclose(arquivo);
    printf("Notas estão salvas no arquivo notas.txt.\\n"); 
    return 0;
}

