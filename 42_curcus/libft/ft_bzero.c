#include <string.h>
#include<stdio.h>


void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    if (n != 0)
    {
        while(i < n)
        {
            ((unsigned char *)s)[i] = 0;
            i++;        
        }

    }
}

int main(void)
{
    char b[] = "hello";
    void *mine = b;
    //int m = 65;

    ft_bzero(mine, 9);
    printf("my return value: %s\n", mine);
    bzero(mine, 9);
    printf("their return value: %s\n", mine);
}