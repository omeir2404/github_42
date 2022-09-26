#include<unistd.h>

void ftputchar(char c)
{
    write(1, &c, 1);
}

void ftstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        ftputchar(str[i]);
        i++; 
    }
    
}

int ftstrlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}


int main(int argc, char **argv)
{
    int i = 0;
    int n = 0;
    int size = 0;
    if (argc == 3)
    {
        while(argv[1][i])
        {
            while(argv[2][n])
            {
                if (argv[1][i] == argv[2][n])
                {
                    size++;
                    break; 
                }
                n++;
            }
            i++;
        }
        if (size == ftstrlen(argv[1]))
            ftstr(argv[1]);
    }
    ftputchar('\n');
    return (0);
}