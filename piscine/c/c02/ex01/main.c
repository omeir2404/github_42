#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
/*{
	unsigned int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}*/

int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("base   : %s\n", src);
	strncpy(dest, src, 2);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 2);
	printf("ft_cpy : %s\n", dest);
}