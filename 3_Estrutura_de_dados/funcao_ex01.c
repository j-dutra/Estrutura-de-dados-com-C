#include <stdio.h>

void	func(int	*px, int	*py)
{
	px = py;
	*py = (*py) * (*py);
	*px = *px + 2;
}

int	main(void)
{
	int	x, y;

	scanf("%d", &x);
	scanf("%d", &y);
	
	func(&x, &y);
	printf("x = %d, y = %d\n", x, y);

	return (0);
}