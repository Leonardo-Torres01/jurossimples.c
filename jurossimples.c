#include <stdio.h>
#include <stdlib.h>
#include "function_jurossimples.c"

int main(int argc, char const *argv[])
{
    FILE *arquivo = fopen("jurossimples.txt", "w");

	if(argc != 4){
        printf("digite a palavra "juros" seguido de 3 argumentos (ex: juros 500 0.5 12)");
        printf("\nsendo 500 o capital, 0.5 a taxa, e 12 o tempo, esses valores podem ser quaisquer numeros");

        fprintf(arquivo, "digite a palavra "juros" seguido de 3 argumentos (ex: jurossimples 500 0.5 12)");
        fprintf(arquivo, "\nsendo 500 o capital, 0.5 a taxa, e 12 o tempo, esses valores podem ser quaisquer numeros");
    }else{
    	double capital = atof(argv[1]);
    	double taxa = atof(argv[2]);
    	double tempo = atof(argv[3]);
		printf("resultado: %f\n", jurossimples(capital, taxa, tempo));


        fprintf(arquivo, "resultado: %f\n", jurossimples(capital, taxa, tempo));
		fprintf(arquivo, "\nFeito por Leonardo Torres");
    }

    fclose(arquivo);
    return 0;
}
