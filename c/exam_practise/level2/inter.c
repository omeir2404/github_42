#include<unistd.h>

void ftputchar(char c)
{
	write(1, &c, 1);
}

int check_prev(char c, char *str, int index)
{
	int i = 0;
	while(i < index)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int inboth(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 3)
	{
			while(argv[1][i])
			{
				if (inboth(argv[1][i], argv[2]))
				{
					if (check_prev(argv[1][i], argv[1], i))
						ftputchar(argv[1][i]);
				}
				i++;
			}

	}
	ftputchar('\n');
}