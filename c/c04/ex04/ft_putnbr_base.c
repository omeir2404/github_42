#include<unistd.h>
int	ver_base(char *base)
{
	int i;

	i = 0;
	if (base[i] == '-' || base[i] == '+' | base[i] == base[i +1])
		return (0);
	i++;
	if (i <= 0)
		return (0);
	return (1);
}

void	aux(int nbr, char *base, int size)
{
	unsigned int 	n;
	char	c;

	if(nbr< 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		aux(n / size, base, size);
	c = base[n % size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	if (ver_base(base) == 1)
	{
		while(base[i] != '\0')
			i++;
		aux(nbr, base, i);
	}
}