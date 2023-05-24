#include <stdio.h>
#include <math.h>
#include <locale.h>
#define consumoTinta 0.3  
#define capacidadeLata 2.0  

  int main() {
  	setlocale(LC_ALL, "Portuguese");
   float largura, altura;

     printf("Informe a largura da parede em metros: ");
    scanf("%f", &largura);

     printf("Informe a altura da parede em metros: ");
    scanf("%f", &altura);

    float area = largura * altura;

    int quantidadeLatas = ceil((area * consumoTinta) / capacidadeLata);
    

    printf("A quantidade de latinhas que precisa é de: %d\n", quantidadeLatas);


	return 0;
}
