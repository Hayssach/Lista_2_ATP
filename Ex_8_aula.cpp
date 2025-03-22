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
    } else {
        // Verifica se o tri�ngulo � ret�ngulo usando o Teorema de Pit�goras
        // Organiza os lados para garantir que a seja o maior lado (hipotenusa)
        if (a > b && a > c) {
            // A � a hipotenusa
            if (a * a == b * b + c * c) {
                printf("Tri�ngulo ret�ngulo.\n");
            } else {
                printf("Tri�ngulo n�o � ret�ngulo.\n");
            }
        } else if (b > a && b > c) {
            // B � a hipotenusa
            if (b * b == a * a + c * c) {
                printf("Tri�ngulo ret�ngulo.\n");
            } else {
                printf("Tri�ngulo n�o � ret�ngulo.\n");
            }
        } else {
            // C � a hipotenusa
            if (c * c == a * a + b * b) {
                printf("Tri�ngulo ret�ngulo.\n");
            } else {
                printf("Tri�ngulo n�o � ret�ngulo.\n");
            }
        }
    }

    getchar();
    return 0;
}
