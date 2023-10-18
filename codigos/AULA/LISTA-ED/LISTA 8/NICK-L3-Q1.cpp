#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int sus_ant(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("\nNumero: %d \nAntecessor: %d \nSucessor: %d", num, num -1, num + 1);
	
	return num; 
}

int main(){
	cabecalho();
	sus_ant();
	return 0;
}
