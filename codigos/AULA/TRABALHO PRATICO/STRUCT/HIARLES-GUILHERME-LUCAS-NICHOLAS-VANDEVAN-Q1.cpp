#include <stdio.h>

struct DadosAluno {
    float media;
    int idade;
    char nome[50];
};

int cabecalho() {
    printf("\tInstituto Federal da Bahia - IFBA - Campus Barreiras.\n");
    printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
    printf("\tProfessor: Djalma A. Lima Filho\n");
    printf("\tAluno(s): Guilherme, Hiarles, Lucas, Nicholas e Vandevan  \n\n");
	printf("\tQuestao: 1\n\n\n");
	
    return 0;
}

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

    struct DadosAluno aluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    aluno.media = calcularMedia();

    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Média: %.2f\n", aluno.media);
    printf("Idade: %d anos\n", aluno.idade);

    return 0;
}

