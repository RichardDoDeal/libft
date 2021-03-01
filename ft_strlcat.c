#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = 0;
	s_len = 0;
	while (*(dst + d_len) && d_len < dstsize)
		d_len++;
	while (d_len + s_len + 1 < dstsize && *(src + s_len))
	{
		*(dst + d_len + s_len) = *(src + s_len);
		s_len++;
	}
	if (d_len + s_len < dstsize)
		*(dst + d_len + s_len) = '\0';
	return (d_len + ft_strlen(src));
}
