
#include "libft.h"

int	ft_tolower(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* int	main(void)
{
	char cadena[] = " Buenos Dias, se va a convertir en MINUSCULAS";
	printf("Cadena original:%s\n", cadena);
	for (int indice = 0, cadena[indice] != '\0'; ++indice)
	{
		cadena[indice] = ft_tolower(cadena[indice]);
	}
	printf("cadena despues de ser convertida:%s\n", cadena);
	return (0);
}*/
