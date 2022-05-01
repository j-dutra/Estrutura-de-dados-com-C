#include <stdio.h>

int	main(void)
{
	int v1[5] = {0, 1, 2, 3, 4};
	int *v2, *p;
	int i;

	p = v1;
	p[3] = p[4] = 10;
	v2 = (int *) malloc(5 * sizeof(int));

	return (0);

}