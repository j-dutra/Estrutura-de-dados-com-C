#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int		a = 0;
	float	b = 0.0;
	char	c = '0';
	int		*pa = &a;
	float	*pb = &b;
	char	*pc = &c;
	void	*p_void;

	printf("&pa = %p, e o &a = %p\n", &pa, &a);
	printf("&pb = %p, e o &b = %p\n", &pb, &b);
	printf("&pc = %p, e o &c = %p\n", &pc, &c);
	printf("\n");
	printf("tamanho do tipo *pa = %d\n", sizeof(pa));
	printf("tamanho do tipo *pb = %d\n", sizeof(pb));
	printf("tamanho do tipo *pc = %d\n", sizeof(pc));
	printf("tamanho do tipo *p_void = %d\n", sizeof(p_void));
	printf("\n");
	printf("tamanho do tipo a = %d\n", sizeof(a));
	printf("tamanho do tipo b = %d\n", sizeof(b));
	printf("tamanho do tipo c = %d\n", sizeof(c));


	return (0);
}
