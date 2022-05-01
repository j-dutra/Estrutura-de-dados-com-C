#include <stdio.h>
#include <limits.h>
#include <float.h>

int	main (void)
{
	printf("1.23  - %lu bytes  (double)      : %g ... %g\n",  sizeof (1.23),  DBL_MIN, DBL_MAX);
	printf("1.23f - %lu bytes  (float)       : %g  ... %g\n",  sizeof (1.23f), FLT_MIN, FLT_MAX);
	printf("1.23l - %lu bytes (long double) : %Lg ... %Lg\n", sizeof (1.23l), LDBL_MIN, LDBL_MAX);
    printf("\n");

	return (0);
}
