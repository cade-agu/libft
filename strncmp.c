
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
}
/*int main(void)
 {
		char str1[15];
		char str2[15];
		int ret;

		strcpy(str1, "abcdef");
		strcpy(str2, "ABCDEF");
		ret = ft_strncmp(str1, str2, 4);
		if (ret < 0)
		{
			printf("str1 es menor que str2");
		}
		else if (ret > 0)
		{
			printf("str2 es menor que str1");
		}
		else
		{
			printf("str1 es igual que str2");
		}
		return (0);
 }*/
