
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	char	*ch;

	ch = (char *)b;
	while (len--)
		*ch++ = c;
	return (b);
}
/*
int	main(void)
{
	char buffer[] = "Esto es un texto";

	printf("Before:%s\n", buffer);
	memset(buffer, '*', 4);
	printf("After:%s\n", buffer);
	return (0);
}*/
