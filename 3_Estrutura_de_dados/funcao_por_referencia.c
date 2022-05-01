#include <stdio.h>
#include <stdlib.h>

void	soma(int	x, int	y, int	*z)
{
	*z = x + y;
	
	printf("&x = %p, x = %d\n", &x, x);
	printf("&y = %p, y = %d\n", &y, y);
	printf("&z = %p, z = %p, *z = %d\n", &z, z, *z);
	printf("\n");
}

int main(void)
{
	int	a = 10;
	int	b = 20;
	int c;

	puts("### ANTES DE CHAMAR A FUNÇÃO ###");
	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("&c = %p, c = %d\n", &c, c);
	printf("\n");

	puts("### CHAMOU A FUNÇÃO ###");
	soma(a, b, &c);

	puts("### DEPOIS DE CHAMAR A FUNÇÃO ###");
	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("&c = %p, c = %d\n", &c, c);
	printf("\n");

	return  (0);
}
