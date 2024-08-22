#include <stdio.h>
 
 // Função para retornar o maior entre dois números
int max(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}
int main() {
 
 int a, b, c, maior_ab;

    // Leitura dos três valores
    scanf("%d %d %d", &a, &b, &c);

    // Calcula o maior entre os dois primeiros números
    maior_ab = max(a, b);

    // Calcula o maior entre o resultado anterior e o terceiro número
    int maior_abc = max(maior_ab, c);

    // Imprime o maior número seguido pela mensagem
    printf("%d eh o maior\n", maior_abc);

    return 0;
}