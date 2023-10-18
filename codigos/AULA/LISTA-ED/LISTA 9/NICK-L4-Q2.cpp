#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int salario(){
	int escolha, soma = 0; 
	float slr, desconto;
	
	while (true){
		printf("Escolha uma das opcoes: \n[1] Cadastrar possivel desconto do INSS"); 
		printf("                [2] Finalizar programa. \nEscolha: ");
		scanf("%d", &escolha);
		
		if (escolha == 1){
			printf("Digite o salario: ");
			scanf("%f", &slr); 
			
			if (slr <= 600){
				float (desconto = 0); 
				printf("Isento\n");
				soma++;
			}
			
			else if ((slr >= 600) && (slr <= 1200)){
				desconto = slr * 0.20; 
				printf("Desconto de 20%\nTotal: R$ %.2f\n", desconto);
				soma++;
			}
			
			else if ((slr >= 1200) && (slr <= 2000)){
				desconto = slr * 0.25; 
				printf("Desconto de 25%\nTotal: R$ %.2f\n", desconto);
				soma++;
			}
			
			else{
				desconto = slr * 0.30; 
				printf("Desconto de 30%\nTotal: R$ %.2f\n", desconto);
				soma++;
			}
		}
		
		else{
			printf("\nQuantidade de pessoas cadastradas: %d", soma);
			printf("\nPrograma finalizado.");
			break; 
		}
	}
	
	return desconto; 
}

int main(){
	cabecalho();
	salario();
	return 0; 
}
