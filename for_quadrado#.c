#include <stdio.h>

int main() {
    int linha, coluna;
    int largura = 40, altura = 10;

    for (linha = 0; linha < altura; linha++) {
        for (coluna = 0; coluna < largura; coluna++) {
            // Condição para imprimir a borda
            if (linha == 0 || linha == altura - 1 || coluna == 0 || coluna == largura - 1)
                printf("#");
            else
                printf(" ");
        }
        putchar('\n');
    }

    return 0;
}
