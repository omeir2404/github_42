#include <stdio.h>

int ft_isalnum(char c)
{
    if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97) || (c <= 57 && c >= 48))
        return (1);
    else
        return (0);
}

int main(void)
{
    int i = ft_isalnum('Z');
    printf("%d", i);
}