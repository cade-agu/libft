
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str [i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
	char s[] = "Estoy aprendiendo";
	char *ptr = ft_memchr(s, 'e', sizeof (s));
	if (ptr != NULL)
	{
		printf ("'e' found at position %d.\n", ptr-s+1);
		printf ("search character found; %s\n", ptr);
	}
	else
	{
		printf ("search character not found\n");
	}
	return (0);
	}*/
