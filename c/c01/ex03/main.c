#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
	*div = a/b;
	*mod = a%b;
	}
}
int		main(void)
{
//	int a;  = 5;
//	int b; = 2;
	int div;
	int mod;
	int *div = &div;

	ft_div_mod(8, 4, div, &mod);
	
	printf("Value of a is : %d",div);
	printf("\nValue of b is : %d",mod);
}