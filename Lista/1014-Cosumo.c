#include <stdio.h>
 
int main() {
 
     int distancia;   
    float combustivel;
    
    scanf("%d", &distancia);
    scanf("%f", &combustivel);

    float consumo_medio = distancia / combustivel;

    printf("%.3f km/l\n", consumo_medio);
 
    return 0;
}