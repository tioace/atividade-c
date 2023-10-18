#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int div(){
	int i, soma = 0; 
	for(i = 1; i <=3000; i++){
		if(i % 5 == 0){
			printf("Divisivel por 5: %d\n", i);
			soma += i;	
			}
		}
		printf("soma: %d", soma);
		return i;
	}

int main(){
	cabecalho();
	div();
}
