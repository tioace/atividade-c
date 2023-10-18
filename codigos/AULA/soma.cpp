#include <stdio.h>
main(){
	int a, b, soma, subtracao; 
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	soma = a + b; 
	subtracao = a - b;
	
	printf("Soma = %d \nSubtracao = %d", soma, subtracao);
	return(0); 
}
