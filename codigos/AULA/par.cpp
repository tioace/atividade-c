#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael\n\n");
}

int main(){
	cabecalho();
	
	int n; 
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("O numero %d eh par e divisivel por 2.", n);
	}
	else {
		printf("O numero %d eh impar e nao eh divisivel por 2.", n);	
	}
	return 0; 
}
