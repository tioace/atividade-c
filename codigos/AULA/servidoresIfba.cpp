#include <stdio.h>

int main(){
	int docente, tecnico, servidor;  
	printf("Insira a quantidade de docentes do Campus Barreiras: ");
	scanf("%d", &docente);
	printf("Insira a quantidade de tecnicos do Campus Barreiras: ");
	scanf("%d", &tecnico);
	printf("Insira a quantidade de servidores do Campus Barreiras: ");
	scanf("%d", &servidor);
	
	printf("\n \n");
	
	printf("Quantidade de pessoas ativas no IFBA: %d", tecnico+servidor+docente);
	printf("\nQuantidade de docentes: %d \n", docente);
	printf("Quantidade de tecnicos administrativos: %d", tecnico);
	
	return 0; 
}
