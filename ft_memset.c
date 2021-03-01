#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*start;

	start = (char *)b;
	while (len > 0)
	{
		*start = (char)c;
		len--;
		start++;
	}
	return (b);
}
