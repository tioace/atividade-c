#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int idade(){
	int i, idade, maior = 0, menor = 999;
	char nome [30];
	char maiornome [30];
	char menornome [30];
	
	for(int i = 1; i <=26; i++){			
	
		printf("\nDigite o nome: ");
		scanf("%s", &nome);
		printf("Idade: ");
		scanf("%d", &idade);
		
		if (idade >= 18){
			printf("Aluno %s maior idade\n", nome);			
		}
		else {
			printf("Aluno %s menor idade\n", nome);
		}
		
		if(idade > maior){
			maior = idade;
			strcpy(maiornome,nome);
		}
	
	    if (idade < menor){
			menor = idade; 	
			strcpy(menornome, nome); 	
		}
	}
	printf("\nAluno %s com a dade mais alta com %d anos\n",maiornome, maior);
	printf("Aluno %s com a idade menor com %d anos\n",menornome, menor);
	return idade; 
}

int main(){
	cabecalho();
	idade();
	return 0; 
}

