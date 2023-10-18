#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}
//(Opção 1 = à vista e Opção 2 = à prazo). Se o produto for pago à vista aplique um desconto
//de 10% antes de mostrar o valor final, senão informe o mesmo valor do produto.
int venda(){
	int escolha, opcao, soma;
	float valor, desconto, final = 0;	
	while(true){
		printf("\nEscolha as opcoes: \n[1]Cadastrar compra                     [2]Encerrar");
		printf("\nOpcao: ");
		scanf("%d", &escolha);
		
		if(escolha == 1){
			printf("\nDigite o preco do produto: ");
			scanf("%f", &valor);
			printf("\nEscolha a forma de pagamento: \n[1]A vista\n[2]A prazo");
			printf("\nOpcao: ");
			scanf("%d", &opcao);
			soma++;
			
			if(opcao == 1){
				desconto = valor * 10 / 100;
				final = valor - desconto; 
				printf("\nPreco final: %.2f\n", final);
			}
			else{
				printf("\nPreco final: %.2f\n", valor);
			}	
			
			printf("\n---------------------------------------------------------------------------------\n");
		}
		
		else if(escolha == 2){
			printf("\n---------------------------------------------------------------------------------\n");
			printf("\nQuantidade de precos calculados: %d", soma);	
			printf("\nPrograma finalizado.");
			break;
		}
	}
}

int main(){
	cabecalho();
	venda();
	return 0; 
}

