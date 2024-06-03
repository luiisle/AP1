#include <stdio.h>

int main() {
    float mediaFinal;
    int aulasTotais, faltas;

    // Solicita ao usuário para inserir a média final do aluno
    printf("Digite a média final do aluno: ");
    scanf("%f", &mediaFinal);

    // Solicita ao usuário para inserir o número total de aulas
    printf("Digite o número total de aulas: ");
    scanf("%d", &aulasTotais);

    // Solicita ao usuário para inserir o número de faltas do aluno
    printf("Digite o número de faltas do aluno: ");
    scanf("%d", &faltas);

    // Calcula a porcentagem de faltas
    float porcentagemFaltas = (float)faltas / aulasTotais * 100;

    // Verifica se o aluno está aprovado ou reprovado
    if (mediaFinal >= 7 && porcentagemFaltas <= 25) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}
