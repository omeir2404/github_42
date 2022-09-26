#include<unistd.h>
void ftputchar(char c)
{
    write(1, &c, 1);
}



int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				argv[1][i] = 77 - (argv[1][i] -78);
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 'm' - (argv[1][i] - 'n');
			write(1, &argv[1][i], 1);
			i++;
        }
    }
    ftputchar('\n');
}