#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	if (dst == NULL && src == NULL && len > 0)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	if (dest > source)
	{
		dest += len - 1;
		source += len - 1;
		while (len--)
			*dest-- = *source--;
	}
	else
		while (len--)
			*dest++ = *source++;
	return (dst);
}
