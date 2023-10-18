#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int div2(){
	int num; 
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("Numero %d eh divisivel por 2 e eh par.", num);
	}
	else{
		printf("Numero %d nao eh divisivel por 2 e eh impar.", num);
	}
	return num; 
}

int main(){
	cabecalho();
	div2();
	return 0; 
}
