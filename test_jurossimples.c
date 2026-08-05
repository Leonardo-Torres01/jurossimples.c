#include "function_jurossimples.c"
#include <stdio.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
	assert(jurossimples(100, 0.5, 10) == 500 && jurossimples(100, 0.25, 12) == 300 && jurossimples(100, 0.75, 5) == 375);
	printf("Teste concluido com sucesso");
    
    printf("\nFeito por Leonardo Torres");
	return 0;
}
