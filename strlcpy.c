
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main (void)
 {
		char string1 [20];
		char string2 [10];

		ft_strlcpy(string1, "Hola");
		ft_strlcpy(string2, "software");

		printf("\nLa palabra en string1 es: %s",string1);
		printf("\nLa palabra en string2 es: %s",string2);

		return (0);

 }*/
