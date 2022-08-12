#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int loop;
    int array[] = {1,2,3};

    for(loop = 0; loop < 3; loop++)
    printf(" %d ", array[loop]);
    printf("\n");
    ft_rev_int_tab(array, 3);

   for(loop = 0; loop < 3; loop++)
    printf(" %d ", array[loop]);
}