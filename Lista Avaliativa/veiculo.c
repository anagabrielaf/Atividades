#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QNT 1

typedef struct {
    int chassi, ano;
    char placa[8], nome[31], combustivel[10], modelo[51], cor[51];
} Veiculo;

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void lerString(char *string, int tamanho) {
    limparBufferEntrada();
    fgets(string, tamanho, stdin);
    size_t tamanhoString = strlen(string);
    if (tamanhoString > 0 && string[tamanhoString - 1] == '\n') {
        string[tamanhoString - 1] = '\0';
    }
}

void cadastrarVeiculos(Veiculo *carros, int quantidade) {
    int i;
    for (i = 0; i < quantidade; i++) {
        printf("Digite o nome do proprietario: ");
        lerString(carros[i].nome, sizeof(carros[i].nome));

        printf("Digite o combustivel utilizado (Álcool, Diesel ou Gasolina): ");
        lerString(carros[i].combustivel, sizeof(carros[i].combustivel));

        printf("Digite o modelo do carro: ");
        lerString(carros[i].modelo, sizeof(carros[i].modelo));

        printf("Digite a cor do carro: ");
        lerString(carros[i].cor, sizeof(carros[i].cor));

        printf("Digite o nº do chassi: ");
        scanf("%d", &carros[i].chassi);
        limparBufferEntrada();

        printf("Digite o ano do veiculo: ");
        scanf("%d", &carros[i].ano);
        limparBufferEntrada();

        printf("Digite a placa do veiculo: ");
        lerString(carros[i].placa, sizeof(carros[i].placa));

        printf("\n");
    }
}

void listarProprietariosDiesel1980(Veiculo *carros, int quantidade) {
    printf("Proprietários com veículos a diesel do ano de 1980 ou posterior:\n");
    int i;
    for (i = 0; i < quantidade; i++) {
        if (carros[i].ano >= 1980 && strcmp(carros[i].combustivel, "Diesel") == 0) {
            printf("Nome: %s\n", carros[i].nome);
        }
    }
    printf("\n");
}

void listarPlacasJ0_2_4_7(Veiculo *carros, int quantidade) {
    printf("Placas que começam com J e terminam com 0, 2, 4 ou 7:\n");
    int i;
    for (i = 0; i < quantidade; i++) {
        int tamanhoPlaca = strlen(carros[i].placa);
        if (carros[i].placa[0] == 'J' && tamanhoPlaca >= 7) {
            char ultimosDigitos[4];
            strncpy(ultimosDigitos, carros[i].placa + tamanhoPlaca - 4, 3);
            ultimosDigitos[3] = '\0';
            int valorNumerico = atoi(ultimosDigitos);
            if (valorNumerico == 0 || valorNumerico == 2 || valorNumerico == 4 || valorNumerico == 7) {
                printf("Placa: %s, Proprietário: %s\n", carros[i].placa, carros[i].nome);
            }
        }
    }
    printf("\n");
}

void listarModeloCorPlacasSegundaLetraVogalSomaPar(Veiculo *carros, int quantidade) {
    printf("Modelo e cor dos veículos com placas que possuem segunda letra vogal e soma dos valores numéricos par:\n");
    int i;
    for (i = 0; i < quantidade; i++) {
        int tamanhoPlaca = strlen(carros[i].placa);
        if (tamanhoPlaca >= 7) {
            char segundaLetra = carros[i].placa[1];
            if (segundaLetra == 'A' || segundaLetra == 'E' || segundaLetra == 'I' || segundaLetra == 'O' || segundaLetra == 'U') {
                char ultimosDigitos[4];
                strncpy(ultimosDigitos, carros[i].placa + tamanhoPlaca - 4, 3);
                ultimosDigitos[3] = '\0';
                int valorNumerico = atoi(ultimosDigitos);
                if (valorNumerico % 2 == 0) {
                    printf("Modelo: %s, Cor: %s\n", carros[i].modelo, carros[i].cor);
                }
            }
        }
    }
    printf("\n");
}

void trocarProprietario(Veiculo *carros, int quantidade, int chassi) {
    printf("Digite o novo nome do proprietário: ");
    char novoNome[31];
    lerString(novoNome, sizeof(novoNome));

    int i;
    for (i = 0; i < quantidade; i++) {
        if (carros[i].chassi == chassi) {
            if (strpbrk(carros[i].placa, "0") == NULL) {
                printf("Troca de proprietário realizada com sucesso!\n");
                strcpy(carros[i].nome, novoNome);
                return;
            } else {
                printf("Não é possível realizar a troca de proprietário para o veículo com chassi %d.\n", chassi);
                return;
            }
        }
    }

    printf("Veículo com chassi %d não encontrado.\n", chassi);
}

int main() {
    Veiculo carros[QNT];
    cadastrarVeiculos(carros, QNT);

    listarProprietariosDiesel1980(carros, QNT);

    listarPlacasJ0_2_4_7(carros, QNT);

    listarModeloCorPlacasSegundaLetraVogalSomaPar(carros, QNT);

    int chassiTroca;
    printf("Digite o número do chassi para troca de proprietário: ");
    scanf("%d", &chassiTroca);
    limparBufferEntrada();
    trocarProprietario(carros, QNT, chassiTroca);

    return 0;
}


