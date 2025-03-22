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
    }
    // Verifica se todos os lados são iguais (triângulo equilátero)
    else if (a == b && b == c) {
        printf("Triângulo equilátero.\n");
    }
    // Verifica se dois lados são iguais (triângulo isósceles)
    else if (a == b || a == c || b == c) {
        printf("Triângulo isósceles.\n");
    }
    // Se os três lados são diferentes, é um triângulo escaleno
    else {
        printf("Triângulo escaleno.\n");
    }

    getchar();
    return 0;
}
