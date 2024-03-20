
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
 int main (void)
 {
		char palabra [20];
		int i;

		printf("INGRESA UNA PALABRA: ");
		scanf("%s", palabra);

		for (i = 0; i < ft_strlen(palabra); i++)
		{
			palabra [i] = ft_toupper(palabra[i]);
		}
		printf ("\n TU PALABRA ES: %s", palabra);
		return
 }*/
