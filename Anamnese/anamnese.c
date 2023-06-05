#include <stdlib.h>
#include <stdio.h>

struct Anamnese {
    char nome_paciente[100];
    char alergia[200];
    char diagnostico[500];
    char queixa[200];
    double altura;
    double peso;
};

int main() {
    struct Anamnese *anamneses = NULL;
    int qtdAnamneses = 0;
    int opcao = 0;

    do {
        printf("\\\\n--- Sistema de Cadastro de Anamneses ---\\\\n");
        printf("1 - Adicionar uma nova anamnese\\\\n");
        printf("2 - Listar anamneses cadastradas\\\\n");
        printf("0 - Sair\\\\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                if (anamneses == NULL) {
                    anamneses = (struct Anamnese *) malloc(sizeof(struct Anamnese));
                } else {
                    anamneses = (struct Anamnese *) realloc(anamneses, (qtdAnamneses + 1) * sizeof(struct Anamnese));
                }
                if (anamneses == NULL) {
                    printf("Erro: nao foi possivel alocar memoria.\\\\n");
                    return 1;
                }

                printf("\\\\n--- Inclusao de Anamnese ---\\\\n");
                printf("Ola, me informe o nome do paciente: ");
                fflush(stdin);
                fgets(anamneses[qtdAnamneses].nome_paciente, 100, stdin);
                printf("O paciente possui alguma alergia?: ");
                fflush(stdin);
                fgets(anamneses[qtdAnamneses].alergia, 200, stdin);
                printf("Por favor, informe o diagnostico do paciente: ");
                fflush(stdin);
                fgets(anamneses[qtdAnamneses].diagnostico, 500, stdin);
                printf("Por favor, informe a queixa do paciente: ");
                fflush(stdin);
                fgets(anamneses[qtdAnamneses].queixa, 200, stdin);
                printf("Por favor, informe a altura do paciente: ");
                scanf("%lf", &anamneses[qtdAnamneses].altura);
                printf("Por favor, informe o peso do paciente: ");
                scanf("%lf", &anamneses[qtdAnamneses].peso);
                qtdAnamneses++;
                printf("\\\\nAnamnese cadastrada com sucesso!\\\\n");
                break;
            }
            case 2: {
                printf("\\\\n--- Lista de Anamneses ---\\\\n");
                if (qtdAnamneses > 0) {
                    for (int i = 0; i < qtdAnamneses; i++) {
                        printf("Nome do paciente: %s", anamneses[i].nome_paciente);
                        printf("Alergia: %s", anamneses[i].alergia);
                        printf("Diagnostico: %s", anamneses[i].diagnostico);
                        printf("Queixa: %s", anamneses[i].queixa);
                        printf("Altura: %.2lf\\\\n", anamneses[i].altura);
                        printf("Peso: %.2lf\\\\n", anamneses[i].peso);
                        printf("\\\\n");
                    }
                } else {
                    printf("Nenhuma anamnese cadastrada.\\\\n");
                }
                break;
            }
            case 0: {
                printf("\\\\nSaindo do programa...\\\\n");
                break;
            }
            default: {
                printf("\\\\nOpcao invalida. Tente novamente.\\\\n");
                break;
            }
        }
    } while(opcao != 0);


