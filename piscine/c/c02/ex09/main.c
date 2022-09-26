#include<stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
    char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("antes: %s\n", a);
    ft_strcapitalize(a);

    printf("depois: %s", a);
    return(0);
}