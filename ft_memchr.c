#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	sb;
	char	*src;

	src = (char *)s;
	sb = (char)c;
	while (n > 0)
	{
		if (*src == sb)
			return (src);
		src++;
		n--;
	}
	return (NULL);
}
