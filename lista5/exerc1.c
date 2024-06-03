#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para inserir um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    return 0;
}
