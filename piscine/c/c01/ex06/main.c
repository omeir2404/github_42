#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    int aux;

    char hello[] = "ola senhores";
    aux =   ft_strlen(hello);
    printf("return: %d", aux);
}