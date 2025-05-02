#include <stdio.h>

int main() {
    int num, i, ehPrimo = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 1) ehPrimo = 0;
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) printf("%d é primo.\n", num);
    else printf("%d não é primo.\n", num);

    return 0;
}
