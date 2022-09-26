#include<stdlib.h>
#include<stdio.h>

int ft_ultimate_range(int **range, int min, int max);
int main(void)
{
    int *arr = NULL;
    
    ft_ultimate_range(&arr, 1, 10);
    int i;

    i = 0;
    while (i < 9)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}