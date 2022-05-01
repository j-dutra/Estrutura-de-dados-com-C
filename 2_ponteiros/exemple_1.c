#include <stdio.h>

int	main (void)
{
	int x;
	int *xPont;

	x = 5;
	xPont = &x;

	//imprime o valor da variavel x = 5
	printf("O valor da variável x é:           %d\n", x);

	//imprime o valor da variavel para qual o ponteiro esta apontando
	printf("O valor de *xPont é:               %d\n\n", *xPont);

	//Imprime o endereço de memoria onde x esta armazenado
	printf("O endereço de memória de x é:      %p\n", &x);

	//Imprime o valor de memoria para onde a variavel esta apontando
	printf("O valor de xPont é:                %p\n\n", xPont);

	//Imprime o endereço de memoraia onde xPont esta armazenado
	printf("O endereço de memória de xPont é:  %p\n\n", &xPont);

	printf("Mostrando que * e & são complementos um do outro\n");
	printf("&*xPont = %p\n", &*xPont);
	printf("*&xPont = %p\n", *&xPont);

	return (0);
}
