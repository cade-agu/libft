#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*int main(void)
{
	char scr [] = "hola";
	char dst [5] = "";
	
	printf("%s\n", memcpy(dst, src, 4)); //hola
	printf("%s\n", dst); //hola
	return (0);
}*/
