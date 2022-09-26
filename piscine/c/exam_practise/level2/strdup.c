#include <stdlib.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
return(i);
}

char *ft_strdup(char *src)
{
    char *dest;
    int i = 0;
    dest = malloc((ft_strlen(src) + 1) * sizeof(char));
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i]='\0';
    return (dest);

}



int main(void)
{
    char src[]="hello world";
    char *dest;
    dest = ft_strdup(src);
    printf("%s", dest);
}