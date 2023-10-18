#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int soma(int num1, int num2){
	int soma = num1 + num2;
	printf("\n%d + %d = %d\n", num1, num2, soma);
	return soma; 
}

int subtracao(int num1, int num2){
	int sub = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, sub);
	return sub; 
}

int produto(int num1, int num2){
	int prod = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, prod);
	return prod; 
}

int divisao(int num1, int num2){
	int div = num1 / num2;
	printf("%d / %d = %d\n", num1, num2, div);
	return div; 
}

int main(){
	cabecalho();
	int num1, num2;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite um numero: ");
	scanf("%d", &num2);
	
	soma(num1, num2);
	subtracao(num1, num2);
	produto(num1, num2);
	divisao(num1, num2);
	
	return 0; 
}
