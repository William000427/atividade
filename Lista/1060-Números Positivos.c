#include <stdio.h>

int main() {
    int i, count = 0;
    double value;

    for (i = 0; i < 6; i++) {
        printf("2 2: -4 -5: -6 6: %d: ", i + 1);
        scanf("%lf", &value);
        
        if (value > 0) {
            count++;
        }
    }
    printf("3: %d\n", count);

    return 0;
}
