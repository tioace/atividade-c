#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA - CAMPUS BARREIRAS\n");
	printf("\tData: 16/05/2023\n");
	printf("\tProfessor: Djalma Filho.          Turma: 732.\n");
	printf("\tDupla: Nicholas Rafael e Victor Galvao\n\n");				
}

float credito(){
	float limite, salario, valor_prestacao;  
	
	printf("Digite o salario: R$");
	scanf("%f", &salario);
	printf("Digite o valor da prestacao: R$");
	scanf("%f", &valor_prestacao);
	
	limite = salario * 0.38;
	
	printf("\n----------------------------------------------------------------\n");
	
	if(valor_prestacao <= limite){
		printf("Emprestimo concedido.");
	} else{
		printf("Emprestimo nao concedido");
	}
	
	return limite;
}

int main(){
	cabecalho();
	credito();
	return 0; 
}
