#include <stdio.h>
#include <stdlib.h>

void troca(int	*x, int *y)
{
	int	aux;

	puts("### Dentro da Função, antes da troca ###");
	printf("&aux = %p, aux = %d\n", &aux, aux);
	printf("&x   = %p,   x = %p, *x = %d\n", &x, x, *x);
	printf("&y   = %p,   y = %p, *y = %d\n", &y, y, *y);
	printf("\n");

	aux = *x;
	*x = *y;
	*y = aux;

	puts("### Dentro da Função troca ###");
	printf("&aux = %p, aux = %d\n", &aux, aux);
	printf("&x   = %p,   x = %p, *x = %d\n", &x, x, *x);
	printf("&y   = %p,   y = %p, *y = %d\n", &y, y, *y);
	printf("\n");
}

int	main(void)
{
	int	a = 10;
	int	b = 20;

	puts("### Antes da Função ###");
	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("\n");

	troca(&a, &b);

	puts("### Depois da Função ###");
	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("\n");

	return (0);
}