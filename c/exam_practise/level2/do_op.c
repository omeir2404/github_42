#include <stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int first;
    int second;
    int result;
    char calc;

    result = 0;
    if (argc == 4)
    {
        first = atoi(argv[1]);
        second = atoi(argv[3]);
        calc = argv[2][0];
        if(calc == '+')
            result = first + second;
        if(calc == '-')
            result = first - second;
        if(calc == '/')
            result = first / second;        
        if(calc == '*')
            result = first * second;
        if(calc == '%')
            result = first % second;
        printf("%d", result);
    }
    printf("\n");
}