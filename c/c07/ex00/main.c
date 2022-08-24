#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int		ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

// char	*ft_strdup(char *src)
// {
// 	int		index;
// 	char	*dest;

// 	index = 0;
// 	if ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)) == NULL)
// 		return (0);
// 	while (src[index])
// 	{
// 		dest[index] = src[index];
// 		index++;
// 	}
// 	dest[index] = '\0';
// 	return (dest);
// }

int	main(void)
{
	char *test;
	char *dup;

	test = "testing";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}