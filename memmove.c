
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)

{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (dest > source)
	{
		while (n-- > 0)
			dest[n] = source[n];
	}
	else
	{
		while (i < n)
		{
			dest [i] = source [i];
			i++;
		}
	}
	return (dst);
}
/*
 int main (void)
 {
		char src[] = "newstring";
		char dst[] = "oldstring";
		printf("Before memmove dst = %s, src = %s\n", dst, src);
		memmove (dst, src, 9);
		printf("After memmove dst = %s, src = %s\n", dst, src);
		return (0);
 }*/
