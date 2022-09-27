#include <string.h>
#include <stdio.h>


char    *ft_strchr(const char *s, int c)
{
    while(c != *s && *s != '\0')
		s++;

	if (c == *s)
		return	((char *)s);
	return (0);
}

int main(void)
{
	const char str[] = "hello world\n";
	printf("%s", ft_strchr(str, 119));
	printf("%s", strchr(str, 119));
}