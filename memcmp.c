
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/* int main (void)
{
	char buffer1[] = "DWgaOtP12df0";
	char buffer2[] = "DWGAOTP12DF0";
	
	int	n;
	
	n = ft_memcmp(buffer1, buffer2, sizeof(buffer1);
	
	if (n>0) printf ("'%s' is greater than '%s' .\n", buffer1, buffer2);
	else if (n<0) printf ("'%s' is less than '%s' .\n", buffer1, buffer2);
	else printf ("'%s' is the same as '%s' . \n", buffer1, buffer2);
	return 0;
}*/
