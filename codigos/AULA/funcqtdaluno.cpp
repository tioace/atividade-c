#include <stdio.h>
#include <stdlib.h>

int qtdaluno(int aluno, int aluna){
	int soma = aluno + aluna;
	return soma; 
}

void aluno(){
	int aluno, aluna, total;
	printf("Digite o numero de alunos: ");
	scanf("%d", &aluno);
	printf("Digite o numero de alunos: ");
	scanf("%d", &aluna);
	total = qtdaluno(aluno, aluna);
	printf("\nAlunos: %d \nAlunas: %d \nTotal: %d", aluno, aluna, total);
}

int main(){
	aluno();
	return 0;
}
