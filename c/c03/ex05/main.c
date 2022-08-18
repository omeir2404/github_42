#include <stdio.h>
#include <string.h>

unsigned    int ft_strlcat(char *dest, char *src, unsigned int size);
int				main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : (%lu) $%s$\n", strlcat(dest, src, 8), dest);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 8), dest2);
}
// int main(void)
// {
// 	char src[]="hello world";
// 	char dest[]="greetings 42";
// 	printf("%i\n", ft_strlcat(dest, src, 12));
// 	printf("%s\n", dest);
// }