#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	int custoMercadoria, valorFrete, despesasN, valorVenda;
    int custoTotal, lucro, porcentagemLucro;

      printf("Insira o custo da mercadoria: ");
    scanf("%d", &custoMercadoria);

      printf("Insira o valor do frete: ");
    scanf("%d", &valorFrete);

      printf("Insira o valor das despesas: ");
    scanf("%d", &despesasN);

    custoTotal = custoMercadoria + valorFrete + despesasN;

      printf("Insira o valor de venda: ");
    scanf("%d", &valorVenda);

    lucro = valorVenda - custoTotal;
    porcentagemLucro = (lucro * 100) / custoTotal;

      printf("valor da venda é: %d\n", valorVenda);
      printf("A porcentagem de lucro da mercadoria é: %d%%\n", porcentagemLucro);
	

		return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	


