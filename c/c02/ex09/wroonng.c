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

char    *ft_strcapitalize(char *str)
{
	int i;
	int size;
	int s;

//	str[i] > 64  && str[i] < 91  use when defining upper +32 to become lower
// str[i] > 96 && str[i] < 123   use when defining lower -32 to become upper

	s = 0;
	size = len(str);
	i = 0;

	while(i < size - 1)
	{

		if(( str[i - 1] > 64  && str[i - 1] < 91 && str[i] > 64 && str[i] < 91))// if str[i -1] is upper and str[i] is upper
		{
			str[i] = str[i] +32;
		}			
			if ((str[i + 1] > 64  && str[i + 1] < 91 || str[i + 1] > 96 && str[i +1] < 123) && str[i] > 96 && str[i] < 123)// if i+1 is a letter and i is lowercase
			{
				str[i] = str[i] - 32;//make str[i] uppercase
			}


		i++;
		
	}
	while(size - s >= 0)
	{
		if((str[size - 1] > 64  && str[size - 1] < 91) && (str[size]> 64  && str[size] < 91))//if size-1 is an uppercase letter and str[size] is an uppercase
		{
		str[i] = str[i] + 32;
		}
		s++;		
	}

	return(str);
}
