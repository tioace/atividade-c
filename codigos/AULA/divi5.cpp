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
	if (n % 5 == 0){
		printf("Numero %d eh divisivel por 5.", n);
	}
	else {
		printf("Numero %d NAO divisivel por 5.", n);
	}
	return 0; 
}
