#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA - CAMPUS BARREIRAS\n");
	printf("\tData: 16/05/2023\n");
	printf("\tProfessor: Djalma Filho.          Turma: 732.\n");
	printf("\tDupla: Nicholas Rafael e Victor Galvao\n\n");				
}

int desconto_inss(){
	float salario, desconto, valor;
	
	printf("Digite o salario: ");
	scanf("%f", &salario);
	
	printf("\n----------------------------------------------------------------------\n");
	
	if (salario <= 600){
		desconto = 0;
		printf("\nIsento  \nValor descontado: %.2f \nSalario: %.2f", desconto, salario);
	}
	
	else if(salario > 600 && salario <= 1200){
		desconto = salario * 0.20;
		valor = salario - desconto; 
		printf("Valor descontado: %.2f \nSalario: %.2f", desconto, valor);
	}
	
	else if(salario > 1200 && salario <= 2000){
		desconto = salario * 0.25;
		valor = salario - desconto; 
		printf("Valor descontado: %.2f \nSalario: %.2f", desconto, valor);
	}
	
	else{
		desconto = salario * 0.30;
		valor = salario - desconto; 
		printf("Desconto de: %.2f Salario descontado: %.2f", desconto, valor);
	}
	
	return valor; 
}


int main(){
	cabecalho(); 
	desconto_inss();
	return 0; 
}
