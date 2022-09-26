#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	rge;
	int	i;

	rge = max - min;
	*range = malloc(sizeof(rge));
	if (!*range)
		return (-1);
	if (min >= -2147483648 && max <= 2147483647)
	{
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			i++;
			min++;
		}
		return (rge);
	}
	return (0);
}