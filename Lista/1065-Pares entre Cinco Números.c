#include <stdio.h>

int main() {
    int valores[5];
    int i, contar = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < 5; i++) {
        if (valores[i] % 2 == 0) {
            contar++;
        }
    }

    printf("%d valores pares\n", contar);

    return 0;
}