#include <stdio.h>
#include <stdlib.h>

void par(){
	int cont, soma = 0; 
	for (cont = 1; cont <= 100; cont++){
		if (cont % 2 == 0){
			soma += cont + soma; 
		}
	}
	printf("Soma par: %d", soma);
}

void impar(){
	int cont, soma = 0; 
	for (cont = 1; cont <= 100; cont++){
		if (cont % 2 != 0){
			soma += cont + soma; 
		}
	}
	printf("Soma impar: %d", soma);
	printf("\n");
}

int main(){
	impar();
	par();
	return 0; 	
}
