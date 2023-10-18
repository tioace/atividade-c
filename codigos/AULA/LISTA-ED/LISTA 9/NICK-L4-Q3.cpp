#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

float media(){
	float nota1, nota2, med; 
	int escolha, soma = 0; 
	
	while (true){
		printf("Escolha uma das opcoes: \n[1]Calcular media do aluno               [2]Encerrar");
		printf("\nOpcao: ");
		scanf("%d", &escolha);
		
		if(escolha == 1){
			printf("\nDigite a nota da prova 1: ");
			scanf("%f", &nota1);
			printf("Digite a nota da prova 2: ");
			scanf("%f", &nota2);
			
			med = (nota1 + nota2) / 2;
			
			if(med >= 7){
				printf("Aprovado.\n");
				printf("Media: %.1f\n\n", med);
				soma++;
			}
			
			else if((med < 7) && (med >= 3)){
				printf("Recuperacao.\n");
				printf("Media: %.1f\n\n", med);
				soma++;
			}
			
			else{
				printf("Reprovado.\n");
				printf("Media: %.1f\n\n", med);
				soma++;
			}
		}
		
		else if (escolha == 2){
			printf("\nQuantidade de notas calculadas: %d\n", soma);
			printf("Programa finalizado.");
			break; 
		}
	}
	return med;
}

int main(){
	cabecalho();
	media();
	return 0; 
}
