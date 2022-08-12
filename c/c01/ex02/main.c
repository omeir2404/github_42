#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
    int d = 2;
    int e  = 4;

    int *a = &d;
    int *b = &e;
    ft_swap(a, b);
    printf("i should be 2 but am :%u\n", *a);
    printf("i should be 4 but am :%u\n", *b);
}