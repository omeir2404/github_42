#include <stdio.h>
char  *ft_strcpy(char *dest, char *src);


int main(void)
{
  char b[7];

  char a[] = "hello";
  
  ft_strcpy(b, a);

  printf("%s", b);
}

