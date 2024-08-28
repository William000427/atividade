#include <stdio.h>
 
int main() {
 
     int idade_em_dias;

    scanf("%d", &idade_em_dias);
    
    int anos = idade_em_dias / 365;
    int dias_restantes = idade_em_dias % 365;
    
    int meses = dias_restantes / 30;
    dias_restantes = dias_restantes % 30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias_restantes);
 
    return 0;
}