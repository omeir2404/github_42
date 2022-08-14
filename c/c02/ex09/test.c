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
   
    while(i <= size - 1)
    {
        if (str[i] > 96 && str[i] < 123 && str[i] > 64  && str[i] < 91)// is a letter
        {
            if (str[i - 1] > 96 && str[i - 1] < 123 && str[i - 1] > 64  && str[i - 1] < 91 && str[i] > 64  && str[i] < 91)//if str[i - 1]is a letter && str[i] is upper
            {
                str[i] += 32;//str[i] becomes lowercase
            }
            else if((!(str[i - 1] > 96 && str[i - 1] < 123 && str[i - 1] > 64  && str[i - 1] < 91)) && (str[i] > 96 && str[i] < 123))// str[i - 1] is not a letter and str[i] is lower
            {
                str[i] -= 32;// becomes uppercase
            }
        }
        //else if ()
        i++;
    }
    return (str);
}