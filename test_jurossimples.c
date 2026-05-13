#include <stdio.h>
#include "function_juros.c"

int main() {
    
    float resultado = juros_simples(1000.0, 10.0, 2);
    
    if (resultado == 1200.0f) 
    {
        printf("Teste Juros Simples: PASSOU\n");
    } 
    else 
    {
        printf("Teste Juros Simples: FALHOU (Resultado esperado: 1200.00, Obtido: %.2f)\n", resultado);
    }

    printf("Criado por Leonardo Torres");
    
    return 0;
}
