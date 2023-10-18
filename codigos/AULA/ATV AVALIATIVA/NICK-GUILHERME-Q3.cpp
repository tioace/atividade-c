#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael  e Guilherme Matos\n\n\n");
}

float media(){
	float nota[10];
	float soma = 0, media; 
	
	for (int i = 0; i < 10; i++){
		printf("Nota: ");
		scanf("%f", &nota[i]);
		soma += nota[i]; 
	}
	
	media = soma / 10; 
	
	if (media >= 7){
		printf("\nAPROVADO");
	}
	
	else if(media >= 4 && media <=7){
		printf("\nRECUPERACAO");
	}
	
	else{
		printf("REPROVADO");
	}
	
	return 0; 
}

int main(){
	cabecalho();
	media();
	return 0; 
}
