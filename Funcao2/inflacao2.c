##include <stdio.h>

float inflacionaPreco(float preco){
    if(preco < 100){
        return preco * 1.10;
    } else {
        return preco * 1.20;
    }
}

int main(){
    float preco;
    printf("Insira o preco do produto: ");
    scanf("%f", &preco);
    float precoInflacionado = inflacionaPreco(preco);
    printf("Preco inflacionado: R$ %.2f\\n", precoInflacionado);
    return 0;
}

