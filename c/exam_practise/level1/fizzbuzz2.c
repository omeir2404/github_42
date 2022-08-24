#include<unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

void putnum(int i)
{
    if (i > 9)
        putnum(i/10);
    putchar((i % 10) + 48);
}

int main(int argc , char ** argv)
{
    int i = 1;
    while( i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3  == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
         else
            putnum(i);
        write(1, "\n", 1);
        i++;
    }
}