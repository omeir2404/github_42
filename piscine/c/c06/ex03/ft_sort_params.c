#include <unistd.h>



void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i++], 1);

	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}


void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(int argc, char **argv)
{
	int a;
	int i;

	a = 1;
	while(a < argc -1)
	{
		i = 1;
		while(i < argc - 1)
		{
			if(ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i ], &argv[i + 1]);
			i++;
		}
		a++;
	}
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}