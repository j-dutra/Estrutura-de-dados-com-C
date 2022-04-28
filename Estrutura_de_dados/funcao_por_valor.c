#include <stdio.h>
#include <stdlib.h>

int	soma(int	x, int	y);
int *gx;
int *gy;
int *gz;

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
	c = soma(a, b);

	int	d;
	int	e;
	int	f;
	puts("### DECLAROU NOVAS VARIAVEIS ###");
	printf("&d = %p\n", &d);
	printf("&e = %p\n", &e);
	printf("&f = %p\n", &f);
	printf("\n");

	puts("### VARIAVEIS GLOBAIS ###");
	printf("&gx = %p, gx = %p, *gx = %d\n", &gx, gx, *gx);
	printf("&gy = %p, gx = %p, *gx = %d\n", &gy, gy, *gy);
	printf("&gz = %p, gx = %p, *gx = %d\n", &gz, gz, *gz);
	printf("\n");

	return  (0);
}

int	soma(int x, int y)
{
	int z = x + y;
	gx = &x;
	gy = &y;
	gz = &z;

	printf("&x = %p, x = %d\n", &x, x);
	printf("&y = %p, x = %d\n", &y, y);
	printf("&z = %p, x = %d\n", &z, z);
	printf("\n");

	puts("### VARIAVEIS GLOBAIS DENTRO DA FUNÇÃO ###");
	printf("&gx = %p, gx = %p, *gx = %d\n", &gx, gx, *gx);
	printf("&gy = %p, gx = %p, *gx = %d\n", &gy, gy, *gy);
	printf("&gz = %p, gx = %p, *gx = %d\n", &gz, gz, *gz);
	printf("\n");

	return (z);
}
