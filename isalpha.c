
#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_isalpha ('j'));
	return (0);
}*/
