#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int i = 7;
    int j = 0;
    int *a = &i;
    int *b = &j;

    ft_ultimate_div_mod(a, b);
    printf("%u\n", *a);
    printf("%u", *b);
    
}