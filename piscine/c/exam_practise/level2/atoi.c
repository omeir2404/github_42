#include<stdio.h>
int ft_atoi(const char *str)
{
    int i = 0;
    int n = 1;
    int result;
    while(str[i] <=32)
        i++;
    if(str[i] == '-')
    {
        n = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * n);
}

int main(void)
{
    char a[]="1246";
    int i;
    i = ft_atoi(a);
    printf("%d", i);
}