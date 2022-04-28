#include <stdio.h>

int	main(void)
{
	int	v[5] = {0, 1, 2, 3, 4};

	for(int i = 0; i < 5; i++)
		printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);

	printf("&v[6] = %p, v[6] = %d\n\n", &v[6], v[6]);
	printf(" v    = %p,    v = %d\n", v, *v);

	return (0);
}
