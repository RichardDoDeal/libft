#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*dest;
	char	*source;
	size_t	size_now;

	if (dst == NULL || src == NULL)
		return (0);
	if (!dstsize)
		return (ft_strlen((char *)src));
	dest = dst;
	size_now = 0;
	source = (char *)src;
	while (size_now + 1 < dstsize && *source)
	{
		*dest = *source;
		dest++;
		source++;
		size_now++;
	}
	*dest = '\0';
	return (ft_strlen((char *)src));
}
