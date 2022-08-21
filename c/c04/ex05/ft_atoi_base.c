#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int ft_atoi_base(char *str, base)
{
	int sign = 1, base = 0, i = 0;

	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= '0' && str[i] <= '9')

		if (base > INT_MAX / 10
			|| (base == INT_MAX / 10
			&& str[i] - '0' > 7))
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		base = 10 * base + (str[i++] - '0');
	return base * sign;
}

int main()
{
	char str[] = "  -123";
	int val = ft_atoi_base(str);
	printf("%d ", val);
	return 0;
}
