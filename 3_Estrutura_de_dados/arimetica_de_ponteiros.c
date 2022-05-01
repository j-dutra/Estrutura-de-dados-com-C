#include <stdio.h>

int	main(void)
{
	int	v[5] = {10, 5, 4, 16, 1};

	printf("V[5] = {10, 5, 4, 16, 1}\n\n");
	printf("&v = %p, v = %p, *v = %d\n\n", &v, v, *v);

	for(int i = 0; i < 5; i++)
		printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);

	puts("");

	for(int i = 0; i < 5; i++)
		printf("(v + %d) = %p, *(v + %d) = %d\n", i, (v + i), i, (v + i));

	return (0);
}