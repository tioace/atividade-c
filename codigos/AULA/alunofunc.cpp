#include <stdio.h>
#include <stdlib.h>

void aluno(){
	int aluno, aluna, total; 
	scanf("%d", &aluno);
	scanf("%d", &aluna);
	total = aluno + aluna; 
	printf("\nAlunos: %d \nAlunas: %d \nTotal: %d", aluno, aluna, total);
}

int main(){
	aluno();
	return 0; 
}
