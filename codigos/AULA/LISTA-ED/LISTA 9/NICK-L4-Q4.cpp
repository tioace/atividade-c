#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int devolucao(){
	char livro[50], usuario[30];
    int dias_dev, soma = 0, escolha;
    float multa = 0;


	while (true){
		printf("Escolha uma das opcoes: \n[1]Cadastrar emprestimo             [2]Encerrar");
		printf("\nOpcao: ");
		scanf("%d", &escolha);
		
		if(escolha == 1){
			printf("\nDigite o nome do livro: ");
		    scanf("%s", livro);
		    printf("Digite o tipo de usuario (professor ou aluno): ");
		    scanf("%s", usuario);
		    
		     if (strcmp(usuario, "professor") == 0) {
		        dias_dev = 10;
		        multa = dias_dev * 2.5;
		    
			    printf("\n RECIBO DE EMPRESTIMO \n");
			    printf("Livro: %s\n", livro);
			    printf("Tipo de usuario: %s\n", usuario);
			    printf("Dias para devolucao: %d\n", dias_dev);
			    printf("Valor da multa por dia de atraso: R$ 2,50\n");
			    printf("Valor total da multa apos o prazo: R$ %.2f\n\n", multa);
			    soma++;

		    } else {
		        dias_dev = 3;
		        multa = dias_dev * 2.5;
			    printf("\n RECIBO DE EMPRESTIMO \n");
			    printf("Livro: %s\n", livro);
			    printf("Tipo de usuario: %s\n", usuario);
			    printf("Dias para devolucao: %d\n", dias_dev);
			    printf("Valor da multa por dia de atraso: R$ 2,50\n");
			    printf("Valor total da multa apos o prazo: R$ %.2f\n\n", multa);
			    soma++;
		    }
		}
			
		else if (escolha == 2){
			printf("\nEmprestimos cadastrados: %d\n", soma);
			printf("Programa finalizado.\n");
			break;
		}
	}
	return dias_dev; 
}

int main(){
	cabecalho;
	devolucao();
	return 0; 
}
