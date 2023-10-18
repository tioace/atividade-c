#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int operacoes(){
	int num1, num2;
	float soma, sub, prod, div, med; 
	
	printf("Digite um numero (diferente de zero): ");
    scanf("%d", &num1);
    printf("Digite um numero (diferente de zero): ");
    scanf("%d", &num2);

    if ((num1 == 0 ) || (num2 == 0)){
        printf("Numero invalido\n");
		exit(0);  
    }
    
    soma = num1 + num2;
    sub = num1 - num2;
    prod = num1 * num2;
    div = (float) num1 / num2;
    med = (num1 + num2) / 2.0;

    printf("\nSoma: %d\n", (int) soma);
    printf("Subtracao: %d\n", (int) sub);
    printf("Produto: %d\n", (int) prod);
    printf("Divisao: %.2f\n", div);
    printf("Media: %.2f\n", med);
	
	return 0; 
}

int main(){
	cabecalho();
	operacoes();
	return 0;
}
