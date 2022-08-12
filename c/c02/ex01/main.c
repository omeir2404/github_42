#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char dest[] = "olaaa";
    char src[]= "hello";
    int size = 10;
    int count = 0;
    ft_strncpy(dest, src, size);

    while(count < size)
    {
        printf("%c", dest[count]);
        count++;
    }
    return(0);
}