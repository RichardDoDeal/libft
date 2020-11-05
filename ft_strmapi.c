
#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	char			*iter;
	unsigned int	index;

	if (s == NULL || f == NULL)
		return (NULL);
	res = ft_strdup(s);
	if (res == NULL)
		return (NULL);
	iter = res;
	index = 0;
	while (*iter)
	{
		*iter = f(index, *iter);
		index++;
		iter++;
	}
	return (res);
}
