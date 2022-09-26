#include <stdio.h>
char  *ft_strcpy(char *dest, char *src);


/*int main(void)
{
  char b[] = "wrooong";

  char a[] = "hello";
  
  ft_strcpy(b, a);

  printf("%s", b);
}*/
int		main(void)
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("base   : %s\n", src);
	ft_strcpy(dest, src);
	printf("cpy    : %s\n", dest);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}

