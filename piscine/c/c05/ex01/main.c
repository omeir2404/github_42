// #include<stdio.h>
// int ft_iterative_factorial(int nb);

// int main(void)
// {
//     int i;
//     i = ft_iterative_factorial(4);
//     printf("%d", i);
// }

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_recursive_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}