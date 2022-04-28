#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float	z;
	float	*fp;

	z = 2.5;
	fp = &z;

	printf("  *&z = %f\n", *&z);
	printf("  n*fp = %f\n", *fp);
	printf("**&fp = %f\n", **&fp);

	return (0);
}
