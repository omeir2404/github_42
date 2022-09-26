#include<stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    int i;
    char hi[]="\24";
    i = ft_str_is_printable(hi);
    printf("%d", i);
    return(0);
}