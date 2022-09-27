int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
 #include <stdio.h>
int main(void)
{
    char ch;
 
    ch = 'M';
    printf("%c in lowercase is represented as  %c",
           ch, ft_tolower(ch));
 
    return 0;
}