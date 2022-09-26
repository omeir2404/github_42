#include <stdio.h>
int ft_strlen(char *str);

int main(void)
{
    char a[]= "12345235678";
    int i;

    i = 0;
    i = ft_strlen(a);
    printf("%d", i);

}