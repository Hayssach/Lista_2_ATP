#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis para os lados do triângulo
    float i, b, d;

    // Solicita ao usuário para inserir os lados do triângulo
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &i);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &b);

    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &d);

    // Verifica se os lados formam um triângulo válido
    if ((i <= 0) || (b <= 0) || (d <= 0) || (i + b <= d) || (i + d <= b) || (b + d <= i)) {
        printf("Triângulo inválido.\n");
    }
    // Verifica se todos os lados são iguais (triângulo equilátero)
    else if (i == b && b == d) {
        printf("Triângulo equilátero.\n");
    }
    // Verifica se dois lados são iguais (triângulo isósceles)
    else if (i == b || a == d || b == d) {
        printf("Triângulo isósceles.\n");
    }
    // Se os três lados são diferentes, é um triângulo escaleno
    else {
        printf("Triângulo escaleno.\n");
    }

    getchar();
    return 0;
}
