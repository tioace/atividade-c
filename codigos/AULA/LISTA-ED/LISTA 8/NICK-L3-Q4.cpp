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
	float nota_edi, nota_inf, soma_inf = 0, soma_edi = 0, med_inf, med_edi; 
	
	for(int i = 1; i <= 5; i++){
		printf("Digite a nota de informatica: ");
		scanf("%f", &nota_inf);
		soma_inf += nota_inf;
	}
	
	printf("\n");
	
	for(int j = 1; j <= 5; j++){
		printf("Digite a nota de edificacoes: ");
		scanf("%f", &nota_edi);
		soma_edi += nota_edi;
	}
	
	med_inf = soma_inf / 5;
	med_edi = soma_edi / 5;
	
	if(med_inf >= med_edi){
		printf("\n\nMedia de informatica maior que edificacoes.");
		printf("\nMedia informatica: %.1f", med_inf);
		printf("\nMedia edificacoes: %.1f", med_edi);
	}
	else{
		printf("\n\nMedia de edificacoes maior que informatica.");
		printf("\nMedia informatica: %.1f", med_inf);
		printf("\nMedia edificacoes: %.1f", med_edi);
	}
	return 0; 
}

int main(){
	cabecalho();
	media();
	return 0; 
}
