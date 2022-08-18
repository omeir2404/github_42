int ft_iterative_power(int nb, int power)
{
    if (power == 0)
    {
        if (nb == 0)
            return (1);
        else
            return (0);
    }
        
    if (power < 0)
        return (0);
    if(power > 0)
    {
        int i;

        i = 1;
        while(i != power)
        {
            nb *= nb;
            i++;            
        }
    }
    return (nb);
}