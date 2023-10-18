#include <stdio.h>

int cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael\n");
	return 0; 
}

int main(){
	cabecalho();
	int caique, lucas; 
	scanf("%d", &caique);
	scanf("%d", &lucas);
	
	if (caique == lucas){
		printf("Caique e Lucas possuem a mesma idade");
	} else{
		printf("Caique tem %d anos de idade", caique);
		printf("\nLucas tem %d anos de idade", lucas);
		printf("\nDiferença de idade em %d anos", caique-lucas);
	}
	return 0; 
}
