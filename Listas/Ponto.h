// Arquivo ponto.h
typedef struct ponto ponto;

// Cria um novo ponto
ponto*	pto_cria(float	x, float	y);

// Libera um ponto
void	pto_libera (Ponto*  p);

// Acessa os valores "x" e "y" de um ponto
void	pto_acessa(Ponto *p, float	*x, float	*y);

// Atribui os valores "x" e "y" a um ponto
void	pto_atribui(Ponto*	p, float	x, float	y);

//	Calcula a distancia entre dois pontos
float	pto_distancia(Ponto	*p1, Ponto	*p2);