#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declara��o das vari�veis para os lados do tri�ngulo
    float a, b, c;

    // Solicita ao usu�rio para inserir os lados do tri�ngulo
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &a);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &b);

    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &c);

    // Verifica se os lados formam um tri�ngulo v�lido
    if ((a <= 0) || (b <= 0) || (c <= 0) || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Tri�ngulo inv�lido.\n");
    }
    // Verifica se todos os lados s�o iguais (tri�ngulo equil�tero)
    else if (a == b && b == c) {
        printf("Tri�ngulo equil�tero.\n");
    }
    // Verifica se dois lados s�o iguais (tri�ngulo is�sceles)
    else if (a == b || a == c || b == c) {
        printf("Tri�ngulo is�sceles.\n");
    }
    // Se os tr�s lados s�o diferentes, � um tri�ngulo escaleno
    else {
        printf("Tri�ngulo escaleno.\n");
    }

    getchar();
    return 0;
}
