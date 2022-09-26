#include <unistd.h>

int main(int argc, char **argv)
{
	int a;
	int i;
	if (argc > 0)
	{
		a = 1;
		while (a < argc)
		{
			i = 0;
			while(argv[a][i] != '\0')
			{
				write(1, &argv[a][i], 1);
				i++;
			}
			a++;
			write(1, "\n", 1);
		}
	}
}