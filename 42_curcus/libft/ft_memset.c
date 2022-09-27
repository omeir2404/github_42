#include <stdlib.h>
#include<stdio.h>
#include<string.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t size;

    size = 0;
    while (size < len)
    {
        ((unsigned char *)b)[size] = c;
        size++;
    }
    return (b);
}
int main(void)
{
    char b[] = "hello";
    void *mine = b;
    int m = 65;

    ft_memset(mine, m, 2);
    printf("my return value: %s\n", mine);
    memset(mine, m, 2);
    printf("their return value: %s\n", mine);
}