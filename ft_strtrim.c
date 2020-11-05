
#include <stdlib.h>
#include "libft.h"

int	check_symbol(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char *go_end(char *start, size_t *len)
{
	while (*start)
	{
		start++;
		(*len)++;
	}
	start--;
	return (start);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *start;
	size_t end_s;
	size_t *len_p;
	size_t len;

	len = 0;
	len_p = &len;
	end_s = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	start = (char *)s1;
	while (*start)
	{
		if (!check_symbol(*start, (char *)set))
			break;
		start++;
		end_s++;
	}
	start = go_end(start, len_p);
	while (start >= s1 + end_s)
	{
		if(!check_symbol(*start, (char *)set))
			break;
		start--;
		len--;
	}
	return (ft_substr(s1, end_s, len));
}
