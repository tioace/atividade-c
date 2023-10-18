#include <stdio.h>
#include <stdlib.h>

void disponivel(){
	int switch, int roteador, int controlador, int total; 
	printf("Digite quantos roteadores estão disponíveis: ");
	scanf("%d", &roteador);
	printf("Digite quantos switch estão disponíveis: ");
	scanf("%d", &switch);
	printf("Digite quantos roteadores estão disponíveis: ");
	scanf("%d", &controlador);
	printf("\nAo total são %d aparelhos disponiveis.", total); 
	printf("\nRoteador: %d", roteador);
	printf("\nControlador: %d", controlador);
	printf("\nSwitch: %d", switch);
}


int main(){
	disponivel();
	return 0; 
}
