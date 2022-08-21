int ft_fibionacci(int index)
{
    int i;

    if(index == 0)
        return(0);
    else if(index == 1)
        return (1);
    else if (index > 1)
    {
        i = ft_fibionacci(index - 1) + ft_fibionacci(index - 2);
        return(i);
    }
    else
        return (-1);
}