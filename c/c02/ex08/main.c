#include<stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
    char a[] = "123abCDEFGHIJKLMNOPQRSTUVWXYZ";
    ft_strlowcase(a);

    printf("%s", a);
    return(0);
}