#include <stdio.h>
#include <stdlib.h>

void soma(){
	int m, n, s; 
	printf("Digite um numero: ");
	scanf("%d", &m);
	printf("Digite um numero: ");
	scanf("%d", &n);
	s = m + n;
	printf("Soma: %d", s);
	printf("\n\n");
}

void subtracao(){
	int m, n, s; 
	printf("Digite um numero: ");
	scanf("%d", &m);
	printf("Digite um numero: ");
	scanf("%d", &n);
	s = m + n;
	printf("Subtracao: %d", s);
	printf("\n\n");
}

int main(){
	soma();
	subtracao();
	return 0; 	
}
