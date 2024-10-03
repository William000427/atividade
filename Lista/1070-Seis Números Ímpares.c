#include <stdio.h>

int main() {
    int X, count = 0;

    scanf("%d", &X);

    if (X % 2 == 0) {
        X++;
    }

    while (count < 6) {
        printf("%d\n", X);
        X += 2;
        count++;
    }

    return 0;
}