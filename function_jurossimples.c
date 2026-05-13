#include <stdio.h>

float juros_simples(float capital, float taxa, int tempo) {
   
    float juros = capital * (taxa) * tempo;
    return juros; 
}
