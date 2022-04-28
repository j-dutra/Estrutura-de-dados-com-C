#include <stdio.h>
#include <stdlib.h>

/* Entendo Alocação dinâmica de Matrizes 2d */

int	main(void)
{
	int **m = NULL;
	int nrows = 2;
	int ncols = 3;

	printf("&**m = %p, *m = %d\n", &m, m);
	puts("");

	m = (int **) calloc(nrows, sizeof(int));
	for (int i = 0; i < nrows; i++)
		printf("&m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);
	puts("");
	
	for (int i = 0; i < nrows; i++)
		m[i] = (int *) calloc(ncols, sizeof(int));
	puts ("");

	for (int i = 0; i < nrows; i++)
	{
		for (int j = 0; j < ncols; j++)
		{
			printf("&m[%d][%d] = %p, *m[%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
		}
		puts("");
	}	

	for (int i = 0; i < nrows; i++)
		printf("&m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);

	/* Faltou desalocar a matriz, utilizando o função free() */

	return (0);
}