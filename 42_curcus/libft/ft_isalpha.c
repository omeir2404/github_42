#include <stdio.h>

int ft_isalpha(char c)
{
    if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
        return (1);
    else
        return (0);
}

int main(void)
{
    int i = ft_isalpha('Z');
    printf("%d", i);
}