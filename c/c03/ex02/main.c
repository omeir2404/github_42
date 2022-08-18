#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[13] = "Hello";
	char src[] = ", world!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char	*ft_strcat(char *dest, char *src);

// int	main(void)
// {
// 	char *src;
// 	char *dest;
// 	char *ft_src;
// 	char *ft_dest;
// 	char *result;
// 	char *ft_result;

// 	src = calloc(7, sizeof(char));
// 	dest = calloc(12, sizeof(char));
// 	ft_src = calloc(7, sizeof(char));
// 	ft_dest = calloc(12, sizeof(char));
// 	strcpy(src, "galera");
// 	strcpy(dest, "alo ");
// 	strcpy(ft_src, "galera");
// 	strcpy(ft_dest, "alo ");
// 	result = strcat(dest, src);
// 	ft_result = ft_strcat(ft_dest, ft_src);
// 	if (ft_dest != ft_result)
// 		printf("KO, return value of ft_strcar is different of ft_dest. ft_strcar=%p ft_dest=%p\n", ft_result, ft_dest);
// 	else if (strcmp(result, ft_result) != 0)
// 		printf("KO, value returned from strcmp with ft_strcat and strcat is different of zero(%d).\n", strcmp(result, ft_result));
// 	else
// 		printf("OK.\nresult: %s\n", ft_result);
// 	return (0);
// }