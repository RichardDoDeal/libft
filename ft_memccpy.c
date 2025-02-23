#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dest;
	char	*source;
	char	sb;

	if ((dst == NULL && src == NULL) || n == 0)
		return (NULL);
	sb = (char)c;
	dest = (char *)dst;
	source = (char *)src;
	while (1)
	{
		*dest = *source;
		if (*dest == sb)
			return (dest + 1);
		dest++;
		source++;
		n--;
		if (n == 0)
			break ;
	}
	return (NULL);
}
