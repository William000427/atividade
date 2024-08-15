#include <stdio.h>
 
int main() {
 
    int codigo1 = 0, numero1 = 0, codigo2 = 0, numero2 = 0;
    double valor_unitario1 = 0.0, valor_unitario2 = 0.0, total = 0.0;
    
    
    scanf("%d %d %lf",&codigo1,&numero1,&valor_unitario1);
    scanf("%d %d %lf",&codigo2,&numero2,&valor_unitario2);
    
    total = (numero1 * valor_unitario1) + (numero2 * valor_unitario2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    
    return 0;
}