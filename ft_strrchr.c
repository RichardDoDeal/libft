#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	char	*res;

	res = NULL;
	src = (char *)s;
	while (1)
	{
		if (*src == c)
			res = src;
		if (*src == '\0')
			break ;
		src++;
	}
	return (res);
}
