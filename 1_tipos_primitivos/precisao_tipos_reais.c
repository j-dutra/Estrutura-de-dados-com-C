#include <stdio.h>
#include <limits.h>
#include <float.h>

int	main (void)
{
	puts("\n**************************************");
	puts("Precisão de números reais.");
    puts("***************************************\n");
	
	printf("Precisão do tipo 'float': %d\n", FLT_DIG);
    puts("               0     6");     
    puts("               |.....|");
	printf("5.0f / 3.0f = %.20f\n", 5.0f / 3.0f);
	puts("--------------------------------------\n");

	printf("Precisão do tipo 'double': %d\n", DBL_DIG);
	puts("               0              15");
    puts("               |..............|");
	printf("5,0 / 3.0   = %.20f\n", 5.0 / 3.0);
	puts("--------------------------------------\n");
	
	printf("Precisão do tipo 'long double' : %d\n", LDBL_DIG);
	puts("               0                 18");
    puts("               |.................|");
	printf("5.0l / 3.0l = %.21LG\n", 5.0l / 3.0l);
	puts("--------------------------------------\n");
	
	return (0);
}
