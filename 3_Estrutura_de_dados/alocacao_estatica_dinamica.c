#include <stdio.h>
#include <stdlib.h>	// contem o NULL, malloc, calloc, free

int main(void)
{
	// Alocação de um vetor estático (memória stack)
	int vs[5] = {0, 10, 20, 30, 40};

	puts("### VETOR ESTÁTICO ###");
	printf("&vs    = %p, vs    = %p\n", &vs, vs);

	for (int i = 0; i < 5; i++)
		printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
	
	puts("\n");
	
	// Alocação de um vetor dinâmico usando malloc (memória heap)
	// Todos os elementos possuiem lixo de memória
	int *vh_mal = (int *) malloc(5 * sizeof(int)); 

	puts("### VETOR DINÂMICO COM MALLOC ###");
	printf("&vh_mal    = %p, vh_mal = %p\n", &vh_mal, vh_mal);

	for (int i = 0; i < 5; i++)
		printf("&vh_mal[%d] = %p, vh_mal[%d] = %d\n", i, &vh_mal[i], i, vh_mal[i]);
	
	puts("\n");

    // Alocação de um vetor dinâmico usando Calloc (memória heap)
    // Garante que todos os elementos do vetor sejam iniciados com 0.
	int *vh_cal = (int *) calloc(5, sizeof(int)); 

	puts("### VETOR DINÂMICO COM CALLOC ###");
	printf("&vh_cal    = %p, vh_cal = %p\n", &vh_cal, vh_cal);

	for (int i = 0; i < 5; i++)
		printf("&vh_cal[%d] = %p, vh_cal[%d] = %d\n", i, &vh_cal[i], i, vh_cal[i]);
	
	puts("\n");

	// não estavamos desalocando os vetores.

	free(vh_mal);
	free(vh_cal);
	vh_mal = NULL;
	vh_cal = NULL;

	return (0);
	
}