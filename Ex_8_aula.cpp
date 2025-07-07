#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis para os lados do triângulo
    float a, g, c;

    // Solicita ao usuário para inserir os lados do triângulo
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &g);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &c);

    // Verifica se os lados formam um triângulo válido
    if ((a <= 0) || (g <= 0) || (c <= 0) || (a + g <= c) || (a + c <= g) || (g + c <= a)) {
        printf("Triângulo inválido.\n");
    } else {
        // Verifica se o triângulo é retângulo usando o Teorema de Pitágoras
        // Organiza os lados para garantir que a seja o maior lado (hipotenusa)
        if (a > g && a > c) {
            // A é a hipotenusa
            if (a * a == g * g + c * c) {
                printf("Triângulo retângulo.\n");
            } else {
                printf("Triângulo não é retângulo.\n");
            }
        } else if (g > a && g > c) {
            // g é a hipotenusa
            if (g * g == a * a + c * c) {
                printf("Triângulo retângulo.\n");
            } else {
                printf("Triângulo não é retângulo.\n");
            }
        } else {
            // C é a hipotenusa
            if (c * c == a * a + g * g) {
                printf("Triângulo retângulo.\n");
            } else {
                printf("Triângulo não é retângulo.\n");
            }
        }
    }

    getchar();
    return 0;
}
