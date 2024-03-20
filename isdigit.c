#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf ("%d", ft_isdigit ('5'));
	return (0);
}*/
