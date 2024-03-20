
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i-- ;
	}
	return (0);
}
/*
int main (void)

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;
	
	i = 0
	while (str[i])
	{
		if (str[i] == c)
		ptr = (char *)str + i;
		i++;
	}
	if (str[i] == c )
	ptr = (char *)str + 1;
	return (ptr);
}*/
