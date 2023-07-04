#include <stdio.h>

int solicitaOpcao(){
    int opcao;
    printf("Selecione a opcao de pagamento de sua preferencia (Cartao de credito/debito):\\n");
    printf("1) A vista com 10% de desconto\\n");
    printf("2) Em duas vezes (preco da etiqueta)\\n");
    printf("3) De 3 ate 10 vezes com 3 porcento de juros ao mes (somente para compras acima de R$ 100,00)\\n");
    scanf("%d", &opcao);
    return opcao;
}

void opcaoAVista(float valor){
    float valorDesconto = valor - (valor * 0.10);
    printf("Valor total com desconto: R$%.2f\\n", valorDesconto);
}

void opcaoDuasVezes(float valor){
    printf("Valor total em duas vezes: 2 x R$ %.2f\\n", valor/2);
}

void opcaoDe3a10Vezes(float valor){
    if(valor > 100){
        int numParcelas;
        printf("Insira o numero de parcelas desejada (entre 3 e 10): ");
        scanf("%d", &numParcelas);
        if(numParcelas >= 3 && numParcelas <= 10){
            float valorParcela = valor * 1.03 / numParcelas;
            printf("Valor total em %d vezes: %d x R$ %.2f\\n", numParcelas, numParcelas, valorParcela);
        } else {
            printf("Numero de parcelas invalido\\n");
        }
    } else {
        printf("Opcao de parcelamento disponivel apenas para compras acima de R$ 100,00\\n");
    }
}

int main(){
    float valorTotal;
    printf("Digite o valor total da compra: ");
    scanf("%f", &valorTotal);
    int opcao = solicitaOpcao();
    switch(opcao) {
        case 1:
            opcaoAVista(valorTotal);
            break;
        case 2:
            opcaoDuasVezes(valorTotal);
            break;
        case 3:
            opcaoDe3a10Vezes(valorTotal);
            break;
        default:
            printf("Opcao invalida\\n");
            break;
    }
    return 0;
}

