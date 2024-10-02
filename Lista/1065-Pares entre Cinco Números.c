#include <stdio.h>

int main() {
    int valor, i;
    int contPares = 0;

    for (i = 0; i < 5; i++) {
        printf("3: ");

        if (valor % 2 == 0) {
            contPares++;
        }
    }

    printf("2: %d\n", contPares);

    return 0;
}
