int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
 #include <stdio.h>
int main(void)
{
    char ch;
 
    ch = 'g';
    printf("%c in uppercase is represented as  %c",
           ch, ft_toupper(ch));
 
    return 0;
}