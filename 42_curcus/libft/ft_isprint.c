#include <stdio.h>
#include <ctype.h>

int ft_isprint(char c)
{
    if (c < 32 || c > 126)
        return (0);
    else
        return (1);
}

int main(void)
{
    int i = ft_isprint(32);
    printf("%d\n", i);
    int y = isprint(32);
    printf("%d", y);
}