#include <stdio.h>

int main() {
    int ano;

    // Solicita ao usuário para inserir um ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Ano bissexto\n");
    } else {
        printf("Ano não bissexto\n");
    }

    return 0;
}
