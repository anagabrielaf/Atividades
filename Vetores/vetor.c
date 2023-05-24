#include <stdio.h>

  int main(){
  	
  	int A[6] = {1, 0, 5, -2, -5, 7};
  	int soma = A[0] + A[1] + A[5];
  	
  	printf("Soma entre A[0], A[1] e A[5] %d\n\n");
  	
  	
  	 A[4] = 100;
  	 
  	 printf("Valores do vetor A:\n");
  	 int i = 0;
  	 while(i < 6){
  	 	printf("A[%d] = %d\n", i, A[i]);
  	 	i++;
	   }
  	
return 0;  	
}  	
  	
  	
  	
  	
  	
  	

  
