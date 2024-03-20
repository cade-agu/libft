#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/* int main(void)
  {
		char buffer [80];
		bzero (buffer, 80);
		return (EXIT_SUCCESS);
  }*/
