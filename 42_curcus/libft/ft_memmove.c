#include <stdio.h>
#include <string.h>
void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
    unsigned int i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((unsigned int)dst - (unsigned int)src < len)
	{
		i = len - 1;
		while (i >= 0 && i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

int main()
{
char csrc[100] = "Geeksfor";
ft_memmove(csrc+5, csrc, strlen(csrc)+1);
printf("%s", csrc);
return 0;
}