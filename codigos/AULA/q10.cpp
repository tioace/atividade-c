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
	int a, b, c;
	a = 10;
	b = 3; 
	c = a % b;
	c += 10;
	c --;
	printf("Resultado: %d", c);
	return 0;
}
