#include <stdio.h>

int main(){
	int informatica, alimentos, edificacoes, total; 
	printf("Insira a quantidade de alunos matriculados em Informatica: ");
	scanf("%d", &informatica);
	printf("Insira a quantidade de alunos matriculados em Alimentos: ");
	scanf("%d", &alimentos);
	printf("Insira a quantidade de alunos matriculados em Edificacoes: ");
	scanf("%d", &edificacoes);
	total = alimentos + edificacoes + informatica; 
	
	printf("\n");
	printf("Total de alunos matriculados no IFBA: %d", total);
	printf("\nTotal de alunos matriculados em Informatica e Edificacoes: %d", informatica+edificacoes);
	printf("\nTotal de alunos matriculados no Informatica e Alimentos: %d", informatica+alimentos);
	printf("\nTotal de alunos matriculados no Alimentos e Edificacoes: %d", alimentos+edificacoes);
	
	printf("\n\nTotal de alunos matriculados em Informatica: %d", informatica);
	printf("\nTotal de alunos matriculados no Alimentos: %d", alimentos);
	printf("\nTotal de alunos matriculados no Edificacoes: %d", edificacoes);
	return 0; 
}
