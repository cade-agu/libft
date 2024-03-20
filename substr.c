
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s) && s[start + i])
		i++;
	j = 0;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (j < i && start < ft_strlen(s))
	{
		str[j] = s[start + j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
