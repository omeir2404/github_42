#include<stdio.h>

int is_power_of2(unsigned int n)
{
    unsigned int i = 1;
    while(i <= n)
    {
        if (i == n)
            return (1);
        i *= 2;
    }
    return(0);
}

int main(void)
{
    int i;
    i = is_power_of2(3);
    printf("%d", i);
}