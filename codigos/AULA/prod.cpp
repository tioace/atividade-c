#include <stdio.h>

int prod (int x, int y){
	return (x*y);
}

int main(){
	int saida; 
	saida = prod(12,7);
	printf("a saida eh: %d", saida);
	return(0);
}
