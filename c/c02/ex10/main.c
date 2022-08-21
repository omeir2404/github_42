#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[] = "";
	char dest[] = "";
	unsigned int n;

	n = 0;
	n = ft_strlcpy(src, dest, 6);
	printf("%d", n);
}