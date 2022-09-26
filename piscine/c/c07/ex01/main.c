#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);
int main(void)
{
    int min = 0;
    int max = 10;
    int *point;
    int i = 0;
    point = ft_range(min,  max);
    while(i < max  - min)
    {
        printf("%d", point[i]); 
        i++;
    }
    free(point);
}