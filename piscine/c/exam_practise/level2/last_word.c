#include <unistd.h>
#include<stdio.h>

void ftputchar(char c)
{
    write(1, &c, 1);
}

int ftstrlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    printf("%d", i);
    return(i);
    
}

int main(int argc, char **argv)
{
    
    if (argc == 2)
    {
        int i = ftstrlen(argv[1]) - 1;
        while (argv[1][i] <= 32)
            i--;
        while ((argv[1][i] >= 65 && argv[1][i]  <= 90) || (argv[1][i]  <= 122 && argv[1][i]  >= 97))
            i--;
        if (!((argv[1][i]  >= 65 && argv[1][i]  <= 90) || (argv[1][i]  <= 122 && argv[1][i]  >= 97)))
            i++;
        while (argv[1][i] != '\0')
        {
            ftputchar(argv[1][i]);
            i++;        
        }
    }
    ftputchar('\n');
}