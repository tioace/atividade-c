#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int escolha(){
	int inf, edi, ali, enf, escolha, soma = 0; 
	while (true){
		printf("Opcoes de curso: \n");
		printf("[1] informatica          [2]edificacoes\n");
		printf("[3] alimentos            [4]enfermagem\n");
		printf("Caso deseje parar aperte [5]\n");
		printf("Escolha uma das opcoes: ");
		scanf("%d", &escolha);
		printf("\n");
		
		if(escolha == 1){
			printf("Voce escolheu informatica!\n\n");
			inf ++;
			soma += inf;
		}
		
		else if(escolha == 2){
			printf("Voce escolheu edificacoes!\n\n");			
			edi ++;
			soma += edi;
		}
		
		else if(escolha == 3){
			printf("Voce escolheu alimentos!\n\n");			
			ali ++;
			soma += ali;
		}

		else if(escolha == 4){
			printf("Voce escolheu enfermagem!\n\n");
			enf ++;
			soma += enf;
		}
		
		else if(escolha == 5){
			printf("Programa finalizado.\n");
			printf("Soma = %d", soma);
			break; 
		}
	}
	return soma; 
}

int main(){
	cabecalho();
	escolha();
}
