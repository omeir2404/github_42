#include <unistd.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}


void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(int argc, char **argv)
{
	int a;
	int i;

	a = 0;
	i = a;
	while(argv[a][i] != '\0')
	{
		if(ft_strcmp(argv[a], argv[i]) > 0) 
			ft_swap(argv[a], argv[i]);
		i++;
	}
	return(0);
}