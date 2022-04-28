#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int n_rows = 2;
	int n_cols = 3;
	int n_slices = 2;

	/* duas fatias, duas linhas, três colunas */
	int m[2][2][3] = 
	{
		{
			/* Primeira fatia */
			{0, 1, 2}, // linha[0]
			{3, 4, 5}  // linha[1]
		},
		{
			/* Segunda fatia */
			{6, 7, 8},   // linha[0]
			{9, 10, 11} // linha[1]
		}
	};	

	printf("&m = %p, m = %p\n\n", &m, m);

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
