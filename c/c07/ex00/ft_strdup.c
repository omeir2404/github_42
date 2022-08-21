int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char *strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while(src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	char *dest;

	dest = malloc((strlen(src) + 1) * sizeof(char));
	if(dest != 0)
		return(ft_strcpy(dest, src));
	return(dest);
}