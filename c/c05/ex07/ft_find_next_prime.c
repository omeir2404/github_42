int ft_is_divisable(int nb)
{
	int i;

	i = 2;
	while (i <= nb/2)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	if (ft_is_divisable(nb) == 1 && nb != 1 && nb > 0)
		return (1);
	return (0);
}

int ft_find_next_prime(int nb)
{

	while(ft_is_prime(nb) == 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else if (ft_is_prime(nb) != 1)
			nb++;        
	}
	return(nb);
}

/*#include<stdio.h>
int main(void)
{
	int b;
	b = ft_find_next_prime(7);
	printf("%d", b);
}*/