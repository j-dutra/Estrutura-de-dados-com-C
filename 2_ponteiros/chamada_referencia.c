#include <stdio.h>

void cubeByReference (int *nPtr);

int main (void)
{
	int number = 5;

    printf ("Chamada de função por referência.\n");
	printf ("Valor de num  é: %d\n", number);
	cubeByReference (&number);
	printf ("Valor de num³ é: %d\n", number);
	return (0);
}

void cubeByReference (int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}

