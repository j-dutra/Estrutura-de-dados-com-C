#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int n_rows = 2;
	int n_cols = 3;
	int n_slices = 2;

	/********** ALOCAÇÃO DINÂMICA DE MATRIZES ***********/
	int ***m = (int ***) calloc(n_slices, sizeof(int **));

	/* para cada fatia */
	for (int k = 0; k < n_slices; k++)
	{
		/* para cada linha */
		m[k] = (int **) calloc(n_rows, sizeof(int *));

		for (int i = 0; i < n_rows; i++)
		{
			/* para cada coluna */
			m[k][i] = (int *) calloc(n_cols, sizeof(int));
		}
	}
	
	/* Para cada fatia */
	for (int k = 0; k < n_slices; k++)
	{
		/* Para cada linha */
		for (int i = 0; i < n_rows; i++)
		{
			/*Para cada coluna */
			for (int j = 0; j < n_cols; j++)
			{
				printf("&m[%d][%d][%d] = %p, m[%d][%d][%d] = %d\n",
						   k, i, j, &m[k][i][j], k, i, j, m[k][i][j]);
			}
			puts("");
		}
		puts("");
	}
	return (0);
}
