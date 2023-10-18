#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int idoso(){
	char nome [30];
	int idade, escolha, soma = 0, novo = 0, velho = 0, jovem = 0;
	
	while (true){
		printf("Escolha uma das opcoes: \n[1] Cadastrar pessoa");
		printf("                 [2] Encerrar cadastro\nOpcao: ");
		scanf("%d", &escolha);
		
		if(escolha == 1){
		soma ++; 
		printf("Digite o nome da pessoa: ");
		scanf("%s", &nome);
		printf("Digite a idade da pessoa: ");
		scanf("%d", &idade);	
		
			if(idade < 18){
				printf("Pessoa menor de idade\n\n");
				novo++; 
			}
			
			else if (idade >= 18 && idade < 65){
				printf("Pessoa maior de idade.\n\n");
				jovem++;
			}
			
			else {
				printf("Pessoa idosa.\n\n");
				velho++;
			}
		}
		
		else{
			printf("\nQuantiadade de pessoas cadastradas: %d\n", soma);
			printf("Pessoas novas: %d \nPessoas jovens: %d \nPessoas idosas: %d", novo, jovem, velho);
			printf("\nPrograma encerrado."); 
			break;
		}
	}
	return idade; 
}


int main(){
	cabecalho();
	idoso();
	return 0; 
}
