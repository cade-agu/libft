
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_isascii(33));
	return (0);
}*/
