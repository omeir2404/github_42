#include<unistd.h>

void ftputchar(char c)
{
    write(1, &c, 1);
}


int checkdoub(char *str, char c, int index)
{
    int i = 0;
    while(i < index)
    {
        if (str[i] == c)
            return (0);
        i++;   
    }
    return (1);
}

int checkdoub2(char *str, char c)
{
    int i = 0;
    while(str[i] )
    {
        if (str[i] == c)
            return (0);
        i++;   
    }
    return (1);
}


int main(int argc, char **argv)
{
    int let = 0;
    if (argc == 3)
    {
        while(argv[1][let])
        {
            if (checkdoub(argv[1], argv[1][let], let))
                ftputchar(argv[1][let]);
            let++;
        }
        let = 0;
        while(argv[2][let])
        {
            if (checkdoub2(argv[1], argv[2][let]))
            {
                if (checkdoub(argv[2], argv[2][let], let))
                    ftputchar(argv[2][let]);
                
            }
            let++;
        }
    }
    ftputchar('\n');
}