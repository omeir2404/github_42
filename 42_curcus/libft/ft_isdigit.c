#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if (c <= 57 && c >= 48)
        return (1);
    else
        return (0);
}

int main(void)
{
    int i = ft_isdigit(5);
    printf("%d\n", i);
    int y = isdigit(5);
    printf("%d", y);
}