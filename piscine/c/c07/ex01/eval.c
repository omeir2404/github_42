#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rge;
	int	i;
	int	range;

	if (max <= min)
		return (0);
	range = max - min;
	rge = malloc(sizeof(range) * range);
	if (!rge)
		return (0);
	i = 0;
	while (min < max)
	{
		rge[i] = min;
		i++;
		min++;
	}
	return (rge);
}