#include <stdio.h>

void cabecalho() {
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(s): Guilherme, Hiarles, Lucas, Nicholas e Vandevan\n\n");
	printf("\tQuestao: 2\n\n");
	printf("------------------------------------------------------------------\n\n\n");

}

struct DadosAluno {
    char nome[50];
    int idade;
    float media;
};

float calcularMedia() {
    float nota1, nota2, nota3;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    return (nota1 + nota2 + nota3) / 3.0;
}

int main() {

    cabecalho();

    struct DadosAluno alunos[10];

    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Digite a idade do aluno: ");
        scanf("%d", &alunos[i].idade);
        alunos[i].media = calcularMedia();
        printf("\n");
    }

	printf("\n-------------------------------------------------------------\n\n");

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d anos\n", alunos[i].idade);
        printf("Media: %.2f\n", alunos[i].media);
        printf("\n");
    }

    return 0;
}
