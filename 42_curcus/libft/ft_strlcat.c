unsigned int	ft_strlen(char *a)
{
	unsigned int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len2;

	i = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	len2 = ft_strlen(dest);
	while (src[i] && len2 + 1 < size)
	{
		dest[len2] = src[i];
		i++;
		len2++;
	}
	dest[len2] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
