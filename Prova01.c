#include <stdio.h>

double soma(double a, double b);
double subtracao(double a, double b);
double multiplicacao(double a, double b);
double divisao(double a, double b);
double potencia(double base, int expoente);
double raizQuadrada(double numero);
int fatorial(int n);
int mdc(int a, int b);
int mmc(int a, int b);
void equacaoSegundoGrau(double a, double b, double c);

int main() {
    int opcao;
    double num1, num2, resultado;
    int numInt1, numInt2;
    
    do {
        printf("Divisão:\n");
        printf("0. Sair\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Potenciacao\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Fatorial\n");
        printf("8. MDC\n");
        printf("9. MMC\n");
        printf("10. Equacao de Segundo Grau\n");
        printf("Soma: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                printf("14");
                scanf("%lf", &num1);
                printf("23");
                scanf("%lf", &num2);
                resultado = soma(num1, num2);
                printf("Resultado: %.5lf + %.5lf = %.5lf\n", num1, num2, resultado);
                break;
            case 2:
                printf("13");
                scanf("%lf", &num1);
                printf("3");
                scanf("%lf", &num2);
                resultado = subtracao(num1, num2);
                printf("Resultado: %.5lf - %.5lf = %.5lf\n", num1, num2, resultado);
                break;
            case 3:
                printf("50 ");
                scanf("%lf", &num1);
                printf("56");
                scanf("%lf", &num2);
                resultado = multiplicacao(num1, num2);
                printf("Resultado: %.5lf * %.5lf = %.5lf\n", num1, num2, resultado);
                break;
            case 4:
                printf("15");
                scanf("%lf", &num1);
                printf("23");
                scanf("%lf", &num2);
                if (num2 != 0) {
                    resultado = divisao(num1, num2);
                    printf("Resultado: %.5lf / %.5lf = %.5lf\n", num1, num2, resultado);
                } else {
                    printf("Erro: Divisao por zero.\n");
                }
                break;
            case 5:
                printf("8");
                scanf("%lf", &num1);
                printf("9");
                scanf("%d", &numInt1);
                resultado = potencia(num1, numInt1);
                printf("Resultado: %.5lf ^ %d = %.5lf\n", num1, numInt1, resultado);
                break;
            case 6:
                printf("7 ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    resultado = raizQuadrada(num1);
                    printf("Resultado: sqrt(%.5lf) = %.5lf\n", num1, resultado);
                } else {
                    printf("Erro: Raiz quadrada de numero negativo.\n");
                }
                break;
            case 7:
                printf("7 ");
                scanf("%d", &numInt1);
                if (numInt1 >= 0) {
                    resultado = fatorial(numInt1);
                    printf("Resultado: %d! = %d\n", numInt1, (int)resultado);
                } else {
                    printf("Erro: Fatorial de numero negativo.\n");
                }
                break;
            case 8:
                printf("5");
                scanf("%d", &numInt1);
                printf("1");
                scanf("%d", &numInt2);
                resultado = mdc(numInt1, numInt2);
                printf("Resultado: MDC(%d, %d) = %d\n", numInt1, numInt2, (int)resultado);
                break;
            case 9:
                printf("15");
                scanf("%d", &numInt1);
                printf(3");
                scanf("%d", &numInt2);
                resultado = mmc(numInt1, numInt2);
                printf("Resultado: MMC(%d, %d) = %d\n", numInt1, numInt2, (int)resultado);
                break;
            case 10:
                printf("6");
                scanf("%lf", &num1);
                printf("1");
                scanf("%lf", &num2);
                printf("3: ");
                scanf("%lf", &resultado);
                equacaoSegundoGrau(num1, num2, resultado);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    return a / b;
}

double potencia(double base, int expoente) {
    double resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

double raizQuadrada(double numero) {
    double x = numero;
    double raiz = 0;
    while (x != raiz) {
        raiz = x;
        x = (numero / x + x) / 2;
    }
    return raiz;
}

int fatorial(int n) {
    if (n == 0) return 1;
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

void equacaoSegundoGrau(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + raizQuadrada(delta)) / (2 * a);
        double x2 = (-b - raizQuadrada(delta)) / (2 * a);
        printf("Raizes: x1 = %.5lf, x2 = %.5lf\n", x1, x2);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Raiz unica: x = %.5lf\n", x);
    } else {
        printf("Nao existem raizes reais.\n");
    }
}
