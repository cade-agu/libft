
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen (dst))
		return (ft_strlen (src) + size);
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (l - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
/*
int main (void)
{
	char *s = "hola mundo";

	char target [128] = "target buffer#";

	printf("hola amigos: %s\n", target);
	strlcat (target, s, '0');
	printf("New target: %s\n", target);
	return (0);
}*/
