#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*dest;

	if (dst == NULL && src == NULL)
		return (dst);
	source = (char *)src;
	dest = dst;
	while (n > 0)
	{
		*dest = *source;
		source++;
		dest++;
		n--;
	}
	return (dst);
}
