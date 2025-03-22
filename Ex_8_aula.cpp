#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis para os lados do triângulo
    float a, b, c;

    // Solicita ao usuário para inserir os lados do triângulo
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &b);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &c);

    // Verifica se os lados formam um triângulo válido
    if ((a <= 0) || (b <= 0) || (c <= 0) || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Triângulo inválido.\n");
    } else {
        // Verifica se o triângulo é retângulo usando o Teorema de Pitágoras
        // Organiza os lados para garantir que a seja o maior lado (hipotenusa)
        if (a > b && a > c) {
            // A é a hipotenusa
            if (a * a == b * b + c * c) {
                printf("Triângulo retângulo.\n");
            } else {
                printf("Triângulo não é retângulo.\n");
            }
        } else if (b > a && b > c) {
            // B é a hipotenusa
            if (b * b == a * a + c * c) {
                printf("Triângulo retângulo.\n");
            } else {
                printf("Triângulo não é retângulo.\n");
            }
        } else {
            // C é a hipotenusa
            if (c * c == a * a + b * b) {
                printf("Triângulo retângulo.\n");
            } else {
                printf("Triângulo não é retângulo.\n");
            }
        }
    }

    getchar();
    return 0;
}
