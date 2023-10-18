#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int caloria(){
	int opcao, prato, bebida, caloria;
	
	while (true){
		printf("\nEscolha uma das opcoes: [1]Calcular caloria do alimento.                       [2]Encerrar");
		printf("\nOpcao: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			printf("\nEscolha o prato:\n[1]Vegetariano\n[2]Peixe\n[3]Frango\n[4]Carne");
			printf("\nOpcao: ");
			scanf("%d", &prato);
			
			printf("\nEscolha a bebida:\n[1]Cha\n[2]Suco de laranja\n[3]Suco de melao\n[4]Refrigerante");
			printf("\nOpcao: ");
			scanf("%d", &bebida);	
			
			if(prato == 1 && bebida == 1){
				caloria = 180 + 20; 
			} 
		
			else if(prato == 1 && bebida == 2){
				caloria = 180 + 70; 
			}
			
			else if(prato == 1 && bebida == 3){
				caloria = 180 + 100; 
			}
			
			else if(prato == 1 && bebida == 4){
				caloria = 180 + 65; 
			}
			
			else if(prato == 2 && bebida == 1){
				caloria = 230 + 20; 
			}
			
			else if(prato == 2 && bebida == 2){
				caloria = 230 + 70; 
			}
			
			else if(prato == 2 && bebida == 3){
				caloria = 230 + 100; 
			}
			
			else if(prato == 2 && bebida == 4){
				caloria = 230 + 65; 
			}
			
			else if(prato == 3 && bebida == 1){
				caloria = 250 + 20; 
			}
			
			else if(prato == 3 && bebida == 2){
				caloria = 250 + 70; 
			}
			
			else if(prato == 3 && bebida == 3){
				caloria = 250 + 100; 
			}
			
			else if(prato == 3 && bebida == 4){
				caloria = 250 + 65; 
			}
			
			else if(prato == 4 && bebida == 1){
				caloria = 350 + 20; 
			}
			
			else if(prato == 4 && bebida == 2){
				caloria = 350 + 70; 
			}
			
			else if(prato == 4 && bebida == 3){
				caloria = 350 + 100; 
			}
			
			else if(prato == 4 && bebida == 4){
				caloria = 350 + 65; 
			}
			
			printf("\nTotal de calorias: %d", caloria);
		}
		
		else{
			printf("\nPrograma finalizado.");
			break; 
		}		
	}
 	return 0;
}

int main(){
	cabecalho();
	caloria();
	return 0; 
}
