#include<stdio.h>
int cmpcs(char c, const char *s2)
{
	int i = 0;
	while(s2[i])
	{
		if (s2[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int ftstrcspn(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while(cmpcs(s1[i], s2))
		i++;

	return(i);
}

int main(void)
{
	int i;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "013";
	i = ftstrcspn(str1, str2);
	printf("%d", i);
}