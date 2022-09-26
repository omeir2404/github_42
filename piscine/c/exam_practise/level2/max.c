#include<stdio.h>
int check(int i, int *tab)
{
    int all = 0;
    while (tab[all])
    {
        if(tab[all] > i)
            return (0);
        all++;
    }
    return(1);
}

int max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    while (i < len - 1)
    {
        if (check(tab[i], tab))
            return(tab[i]);
        i++;
    }
    return(i);
}

// int		max(int* tab, unsigned int len)
// {
// 	unsigned int i;
// 	int tmp;

// 	i = 1;
// 	while (i < len - 1)
// 	{
// 		if (tab[i] < tab[i + 1])
// 		{
// 			tmp = tab[i];
// 			tab[i] = tab[i + 1];
// 			tab[i + 1] = tmp;
// 			i = -1;
// 		}
// 		i++;
// 	}
// 	return (tab[0]);
// }


int main(void)
{
    int arr[]={5, 32, 3, 246, 8, 34};
    int i = max(arr, 6);
    printf("%d", i);
}