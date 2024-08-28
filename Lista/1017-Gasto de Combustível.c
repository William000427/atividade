#include <stdio.h>
 
int main() {
 
     int tempo;
    int velocidade;
    
    scanf("%d %d", &tempo, &velocidade);

    double distancia = tempo * velocidade;
    
    double litros = distancia / 12.0;
    
    printf("%.3lf\n", litros);
 
    return 0;
}