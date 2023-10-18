#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int converter(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);	
	
	printf("\nNumero: %d", num);
	printf("\nOctal: %o", num);
	printf("\nHexadecimal: %x", num);
	
	return num; 
}

int main(){
	cabecalho();
	converter();
	return 0;
}
