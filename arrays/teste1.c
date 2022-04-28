#include <unistd.h>

int	main (void)
{
	char nome[] = "Joao";
    while(*nome++)
	{
		write (1, &nome, 1);
		
	}
	return (0);
}
