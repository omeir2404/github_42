#include<stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    int i;
    char hi[]="";
    i = ft_str_is_alpha(hi);
    printf("%d", i);
    return(0);
}