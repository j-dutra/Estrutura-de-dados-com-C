#inlcude <unistd.h>

int	main (void)
{
	//char fruta[] = "Banana";
	//char bicho = "Zebra";
	char cor[5];
	char *carro;

	//Lembre-se: nomes de arrays não podem participar de atribuições!
	//cor = "roxo"; --> Provoca erro!
    //O nome da variavel é constante por isso não pode receber valores 
	//por atribuição.
	
	cor[0] = 'r';
	cor[1] = 'o';
	cor[2] = 'x';
	cor[3] = 'o';
	cor[4] = '\0'

	//Mas ponteiros podem, pois não são uma constante e sim uma variavel
	
	* carro = "Fusca";

	while(*carro != '\0')
	{
		write (1, carro, 1);
		carro++;
	}

	write (1, &cor, 4);

	return (0);
}
