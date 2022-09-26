#include<stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    int i;
    char hi[]="a2";
    i = ft_str_is_lowercase(hi);
    printf("%d", i);
    return(0);
}