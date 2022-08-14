#include<stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char a[] = "A123bcdefghijklmonopqrstuvwxyz";
    ft_strupcase(a);

    printf("%s", a);
    return(0);
}