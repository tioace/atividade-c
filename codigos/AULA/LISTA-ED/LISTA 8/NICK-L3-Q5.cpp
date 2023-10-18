#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int media(){
	float nota, med, soma = 0;
	
	for (int i = 1; i <= 5; i++){
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		soma += nota;
	}
	
	med = soma / 5;
	
	if (med >= 7){
		printf("\nAluno APROVADO \nMedia: %.1f", med);
	}
	else if((med < 7) && (med >= 4)){
		printf("\nAluno de RECUPERACAO \nMedia: %.1f", med);
	}
	else{
		printf("\n Aluno REPROVADO \nMedia: %.1f", med);
	}
	return med;
}

int main(){
	cabecalho();
	media();
	return 0;
}
