#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int impar(){
	int i;
	for(i = 0; i <= 2500; i++){
		if(i % 2 != 0){
			printf("Numero impar: %d\n", i);
		}
	}
	return i; 
}

int main(){
	cabecalho();
	impar();
}

