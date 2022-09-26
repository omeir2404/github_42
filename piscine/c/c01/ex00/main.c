#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int		main (void)
{
	int lol;

	lol = 2156870;	
	ft_ft(&lol);
	printf("nbr : %d\n", lol);
	write(1, &lol, 1);
	return (0);
}