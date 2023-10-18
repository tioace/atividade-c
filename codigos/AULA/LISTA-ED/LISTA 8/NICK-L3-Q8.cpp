#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int maior(){
	int num1, num2;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite um numero: ");
	scanf("%d", &num2);
	
	if (num1 >= num2){
		printf("\nNumero %d maior que %d.", num1, num2);
	}
	else{
		printf("\nNumero %d maior que %d.", num2, num1);
	}
	return 0; 
}

int main(){
	cabecalho();
	maior();
	return 0;
}
