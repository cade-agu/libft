#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*
int	main(void)
{
	char texto[] = "Elena";
	int longitud = 0;
	longitud = ft_strlen (texto);
	printf("la longitud de la cadena es: %d\n", longitud);
	return (0);
}
*/
