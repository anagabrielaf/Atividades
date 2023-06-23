#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    double matematica, fisica, quimica, media;
    printf("Insira a nota de Matem�tica: ");
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
    fprintf(arquivo, "Matem�tica: %.2lf\\n", matematica); 
    fprintf(arquivo, "F�sica: %.2lf\\n", fisica);
    fprintf(arquivo, "Qu�mica: %.2lf\\n", quimica);
    fprintf(arquivo, "M�dia: %.2lf\\n", media);
    fclose(arquivo);
    printf("Notas est�o salvas no arquivo notas.txt.\\n"); 
    return 0;
}

