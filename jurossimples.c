#include <stdio.h>
#include "function_juros.c"

int main() 
   {
    float capital, taxa;
    int tempo;

    printf("--- Calculadora de Juros Simples ---\n");
    
    printf("Digite o capital inicial (R$): ");
    scanf("%f", &capital);
    
    printf("Digite a taxa de juros mensal (%%): ");
    scanf("%f", &taxa);
    
    printf("Digite o tempo (meses): ");
    scanf("%d", &tempo);

    float montante =juros_simples(capital, taxa, tempo);
    
    printf("\nO montante final apos %d meses sera: R$ %.2f\n", tempo, montante);

    
    printf("Criado por Leonardo Torres");
    
    return 0;
}
