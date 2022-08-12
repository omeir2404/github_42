#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    int aux;

    char hello[] = "";
    aux =   ft_strlen(hello);
    printf("return: %d", aux);
}