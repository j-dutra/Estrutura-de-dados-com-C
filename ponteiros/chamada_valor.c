#include <stdio.h>

int cubeByValue (int	n);

int	main (void)
{
	int	number = 5;

	printf ("Chamada de função por valor.\n");
	printf("Valor do núm  é: %d\n", number);
	number = cubeByValue (number);
	printf("Valor do núm³ é: %d\n", number);
	return (0);
}

int cubeByValue (int	n)
{
	return n * n * n;
}

