#include <stdio.h>
#include <stdlib.h>

void disponivel(){
	int switch, int roteador, int controlador, int total; 
	printf("Digite quantos roteadores est�o dispon�veis: ");
	scanf("%d", &roteador);
	printf("Digite quantos switch est�o dispon�veis: ");
	scanf("%d", &switch);
	printf("Digite quantos roteadores est�o dispon�veis: ");
	scanf("%d", &controlador);
	printf("\nAo total s�o %d aparelhos disponiveis.", total); 
	printf("\nRoteador: %d", roteador);
	printf("\nControlador: %d", controlador);
	printf("\nSwitch: %d", switch);
}


int main(){
	disponivel();
	return 0; 
}
