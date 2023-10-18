#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael\n\n");
}

int main(){
	cabecalho();
	
	float n1, n2, n3, n4, n5;
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	scanf("%f", &n5);
	
	float media = (n1 + n2 + n3 + n4 + n5) / 5;
	
	if ((media >= 7.0) && (media <=10)){
		printf("\nMedia: %.1f\n", media);
		printf("Aluno(a) esta Aprovado na disciplina ED.");
	}
	else if ((media >= 4.0) && (media < 7.0)){
		printf("\nMedia: %1f\n", media);
		printf("“Aluno(a) em prova final da disciplina ED!");
	}
	else if (media < 4.0){
		printf("\nMedia: %.1f\n", media);
		printf("Aluno(a) esta Reprovado na disciplina ED.");
	}
	
}
