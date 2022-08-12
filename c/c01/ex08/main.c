#include <stdio.h>

void  ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int loop;
    int array[] = {'2','7','5','4','8','6','1','3'};
    printf("berfore function:");
    for(loop = 0; loop < 8; loop++)
    printf(" %d ", array[loop]);
    printf("\n");
    ft_sort_int_tab(array, 8);
    printf("after function :");
   for(loop = 0; loop < 8; loop++)
    printf(" %d ", array[loop]);
}