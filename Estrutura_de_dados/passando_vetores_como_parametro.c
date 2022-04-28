#include <stdio.h>
#include <stdlib.h>	// contem o NULL, malloc, calloc, free

void soma_vetor_com_escalar(int v[], int n, int escalar)
{
    for(int i = 0; i < n; i++)
    {
        v[i] += escalar;
    }
}

void print_vetor(const int *v, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("V[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    }
    puts("");
}

void desaloca_vetor(int **v)
{
    free(*v);
    *v = NULL;
}

int main(void)
{
    // Alocação de um vetor estático (memória stack)
    puts("### VETOR ESTÁTICO ###");
    int vs[5] = {0, 10, 20, 30, 40};

    print_vetor(vs, 5);
    soma_vetor_com_escalar(vs, 5, 9);
    print_vetor(vs, 5);

    puts("### VETOR DINÂMICO COM CALLOC ###");
    int *vh = (int *) calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        vh[i] = i * 100;
    }

    print_vetor(vh, 5);
    soma_vetor_com_escalar(vh, 5, 9);
    print_vetor(vh, 5);

    // desalocando o vetor dinâmico
    puts("### ANTES DA FUNÇÃO DE DESALOCAR VETOR DINÂMICO ###");
    printf("&vh = %p, vh = %p\n", &vh, vh);
    desaloca_vetor(&vh);
    puts("### DEPOIS DA FUNÇÃO DE DESALOCAR VETOR DINÂMICO ###");
    printf("&vh = %p, vh = %p\n", &vh, vh);

    return (0);
}
