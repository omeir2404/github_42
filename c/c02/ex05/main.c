#include<stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    int i;
    char hi[]="C";
    i = ft_str_is_uppercase(hi);
    printf("%d", i);
    return(0);
}