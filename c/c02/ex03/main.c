#include<stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    int i;
    char hi[]="";
    i = ft_str_is_numeric(hi);
    printf("%d", i);
    return(0);
}