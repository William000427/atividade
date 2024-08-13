#include <stdio.h>
 
int main() {
 
    char nome[100];
    double total = 0.0,salarioFixo = 0.0, totalVendas = 0.0;
    
    scanf("%s\n",&nome);
    scanf("%lf\n%lf\n",&salarioFixo,&totalVendas);
    
    total = salarioFixo + (totalVendas*0.15);
    printf("TOTAl = R$ %.2lf\n",total);
    return 0;
}