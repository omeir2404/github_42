#include <string.h>
#include "libft.h"
#include <stdio.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    size_t i;
    if (!dst || !src)
        return (0);
    srcsize = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
    }

    return (srcsize);
}

int main(void)
{
    char dst[] = "hello";
    char src[] = "goodbye";
    printf("before: src: %s \n dst: %s \n", src, dst);
    ft_strlcpy(dst, src, 5);
    printf("after: src: %s \n dst: %s \n", src, dst);
    char ogdst[] = "hello";
    char ogsrc[] = "goodbye";
    printf("before og: src: %s \n dst: %s \n", ogsrc, ogdst);
    strlcpy(ogdst, ogsrc, 5);
    printf("after og: src: %s \n dst: %s \n", ogsrc, ogdst);
}