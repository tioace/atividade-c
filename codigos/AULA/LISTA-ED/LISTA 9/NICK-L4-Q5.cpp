#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int consumo(){
	float consumo, percurso; 
	char tipo;
	int escolha, soma = 0;
	
	while (true){
		printf("Escolha uma das opcoes: \n[1]Calcular gasolina para percurso               [2]Encerrar");
		printf("\nOpcao: ");
		scanf("%d", &escolha);
		
		if(escolha == 1){
			printf("\nDigite o percurso em km: ");
   			 scanf("%f", &percurso);
    		printf("Digite o tipo do carro (A, B ou C): ");
    		scanf(" %c", &tipo);

		    switch (tipo) {
		        case 'A':
		            consumo = percurso / 12;
		            printf("Consumo estimado: %.2f litros\n\n", consumo);
		            soma++;
		            break;
		
		        case 'B':
		            consumo = percurso / 9;
		            printf("Consumo estimado: %.2f litros\n\n", consumo);
		            soma++;
		            break;
		
		        case 'C':
		            consumo = percurso / 8;
		            printf("Consumo estimado: %.2f litros\n\n", consumo);
		            soma++;
		            break;	
		            
		        default:
            		printf("Tipo de carro inválido\n\n");
            		break;
	    	}
		}
		
		else if (escolha == 2){
			printf("\nQuantidade de percursos calculados: %d\n", soma);
			printf("Programa finalizado.");
			break;
			
		}
	}
}

int main(){
	cabecalho();
	consumo();
	return 0;
}
