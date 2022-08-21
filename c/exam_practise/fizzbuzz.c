#include<unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void putnum(int i)
{
    if (i > 9)
    {
        putnum(i / 10);

           
    }
    ft_putchar((i % 10) + 48);
}

int main()
{
  // output the fizz buzz sequence from 1 to 100
  int i = 1;
  while (i <= 100)
  {
    // output Fizz Buzz if the number is divisible by 3 AND 5
    if ( (i % 3 == 0) && (i % 5 == 0) )
      write(1,"Fizz Buzz", 9);    
    // output Fizz if the number is divisible by 3
    else if (i % 3 == 0)
      write(1,"Fizz", 4);  
    // output Buzz if the number is divisible by 5
    else if (i % 5 == 0)
      write(1,"Buzz", 4);  
    // otherwise output the number
    else
        putnum(i);
    write(1, "\n", 1);
    i++;
  }
  
  return 0;
}