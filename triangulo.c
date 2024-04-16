#include <stdio.h>

int main() {
    int altura, linha, espacos, asteriscos;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    // Loop para cada linha do triângulo
    for (linha = 1; linha <= altura; linha++) {
        // Calcula o número de espaços em branco na linha
        for (espacos = 1; espacos <= altura - linha; espacos++) {
            printf(" ");
        }
        // Calcula o número de asteriscos na linha
        for (asteriscos = 1; asteriscos <= 2 * linha - 1; asteriscos++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
