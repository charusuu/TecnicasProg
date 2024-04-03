#include <stdio.h>

int main() {
    int altura, linha, coluna;

    printf("Altura do triangulo:");
    scanf("%d", &altura);

    for (linha = 0; linha < altura; linha++) {
        for (coluna = 0; coluna <= linha; coluna++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
