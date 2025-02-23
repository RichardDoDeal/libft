#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a substring
**	from the string ’s’.
**	The substring begins at index ’start’ and is of
**	maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*iter;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (start > s_len)
		return (ft_calloc(1, 1));
	if (len >= s_len - start)
		s_len = s_len - start + 1;
	else
		s_len = len + 1;
	res = malloc(s_len * sizeof(char));
	if (!res)
		return (NULL);
	iter = res;
	while (len-- > 0 && *(s + start))
		*iter++ = *(s + start++);
	*iter = '\0';
	return (res);
}
