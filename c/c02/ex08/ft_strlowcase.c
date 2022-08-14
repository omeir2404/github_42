int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strlowcase(char *str)
{
	int i;
	int size;
	size = len(str);
	i =0;
	while (str[i] != str[size])
	{
		if (str[i] < 91 && str[i] > 64)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	


	return (str);
}