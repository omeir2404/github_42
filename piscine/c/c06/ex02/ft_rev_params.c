#include <unistd.h>

int main(int argc, char **argv)
{
	int a;
	int i;
	if (argc > 1)
	{
		a = argc - 1;
		while (a > 0)
		{
			i = 0;
			while(argv[a][i] != '\0')
			{
				write(1, &argv[a][i], 1);
				i++;
			}
			a--;
			write(1, "\n", 1);
		}
	}
    return(0);
}