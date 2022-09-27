#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if (c <= 127 && c >= 0)
        return (1);
    else
        return (0);
}

int main(void)
{
    int i = ft_isascii('c');
    printf("%d\n", i);
    int y = isascii('c');
    printf("%d", y);
}