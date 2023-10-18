#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int questionario (){
	int bom, regular, excelente, opcao, idade, soma; 
	float media;
	
	for(int i = 0; i < 23; i++){
		printf("\nDigite sua idade: ");
		scanf("%d", &idade);
		printf("\nQual sua opniao sobre o documentario Dilemas das Redes\n[1]Excelente\n[2]Bom\n[3]Regular");
		printf("\nOpcao: ");
		scanf("%d", &opcao);
		soma = idade;
		
		if(opcao == 1){
			excelente++;
		}
		
		else if(opcao == 2){
			bom++;
		}
		
		else if(opcao == 3){
			regular++;
		}
	}
	media = soma / 23;
	printf("\nMedia de idade: %.1f", media);
	printf("\nQuantidade de votos: \nExcelente: %d\nBom: %d\nRegular: %d", excelente, bom, regular);
	return 0;
}

int main(){
	cabecalho();
	questionario();
	return 0; 
}
