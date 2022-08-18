#include <unistd.h>
#include<stdio.h>
#include <limits.h>

int ft_atoi(char *str)
{
	int sign = 1;
	int	base = 0;
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = 10 * base + (str[i++] - '0');
	}
	return (base * sign);
}


int		main(void)
{
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));
}