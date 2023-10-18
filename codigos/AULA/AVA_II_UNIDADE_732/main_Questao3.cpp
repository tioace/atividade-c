#include <stdio.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 27/06/2023\n");
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Kayan de Brito e Nicholas Rafael\n");
	printf("\tQuestao: 3\n\n");
	printf("\n----------------------------------------------------------\n\n");
}


int main() {
    cabecalho();
    float preco[13][2];
    float lucro;
    int lucroMenor10 = 0, lucro10e20 = 0, lucroMaior20 = 0;
    int i;

    for (i = 0; i < 13; i++) {
        printf("Informe o preco de compra da mercadoria %d: ", i+1);
        scanf("%f", &preco[i][0]);

        printf("Informe o preco de venda da mercadoria %d: ", i+1);
        scanf("%f", &preco[i][1]);

        lucro = (preco[i][1] / preco[i][0]) * 100;

        if (lucro < 10) {
            lucroMenor10++;
        } else if (lucro >= 10 && lucro <= 20) {
            lucro10e20++;
        } else {
            lucroMaior20++;
        }
    }

    printf("\nResultados:\n");
    printf("Numero de mercadorias com lucro < 10%%: %d\n", lucroMenor10);
    printf("Numero de mercadorias com 10%% <= lucro <= 20%%: %d\n", lucro10e20);
    printf("Numero de mercadorias com lucro > 20%%: %d\n", lucroMaior20);

    return 0;
}

