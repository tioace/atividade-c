#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int imposto(){
	char nome [30];
	float slr_bruto = 0, aliquota;
	int i, j; 
	
	for(i = 1; i <=3; i++){
		
		printf("Digite o nome da pessoa: ");
		scanf("%s", &nome);
		printf("Digite o salario bruto da pessoa: ");
		scanf("%f", &slr_bruto);
		
		if(slr_bruto < 1300){
			aliquota = 0;
			printf("Insento.\n");
		}
		
		else if((slr_bruto >= 1300) && (slr_bruto < 2300)){
			aliquota = slr_bruto * 0.10;
			printf("10%% do salario bruto.\n");
		}
		
		else {
			aliquota = slr_bruto * 0.15; 
			printf("15%% do salario bruto.\n");
		}
 
		printf("\nNome: %s \nAliquota do imposto de renda: %.2f\n\n", nome, aliquota);	
	}
	
	for(j = i; j <= 3; j++){
		printf("Nome: %s.\n", nome);
		printf("Aliquota: %.2f\n\n", aliquota);
	}
	
	return aliquota; 
}

int main(){
	cabecalho();
	imposto();
	return 0; 
}

