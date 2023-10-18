#include <stdio.h>

int cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael\n\n");
	return 0;
}

int main(){
	cabecalho();
	
	int n; 
	scanf("%i", &n);
	
	if ((n % 2 == 0) && (n > 15)){
			printf("O numero %i eh par e maior que 15.\n", n);
	}
	else {
		  if ((n % 2 != 0) && (n < 50))
			printf("O numero %i eh impar e menor que 50.\n", n);
	}
	return 0; 
}
