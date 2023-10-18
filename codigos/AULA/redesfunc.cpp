#include <stdio.h>
#include <stdlib.h>

void disponivel(){
	int swtch, roteador, controlador, total; 
	printf("Digite quantos roteadores estao disponiveis: ");
	scanf("%d", &roteador);
	printf("Digite quantos switch estao disponiveis: ");
	scanf("%d", &swtch);
	printf("Digite quantos roteadores estao disponiveis: ");
	scanf("%d", &controlador);
	total = controlador + swtch + roteador;
	printf("\n\nAo total sao %d aparelhos disponiveis.", total); 
	printf("\nRoteador: %d", roteador);
	printf("\nControlador: %d", controlador);
	printf("\nSwitch: %d", swtch);
}

int main(){
	disponivel();
	return 0; 
}
