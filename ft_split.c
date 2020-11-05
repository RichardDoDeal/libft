
#include "libft.h"

size_t	get_len(char *str, char c)
{
	size_t len;

	len = 0;
	while (*str && *str != c)
	{
		len++;
		str++;
	}
	return (len);
}

char	*skip_splitter_and_get_len(char *str, char c, size_t *len)
{
	while (*str == c)
		str++;
	*len = get_len(str, c);
	return (str);
}

size_t	get_count_words(char *str, int c)
{
	size_t count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str++ != c)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

void	ptr_clean(char **res)
{
	while (*res)
	{
		free(*res);
		res++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	**iter;
	char	*str;
	size_t	len;
	size_t	count_words;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	count_words = get_count_words(str, c);
	if (!(res = malloc(sizeof(char *) * (count_words + 1))))
		return (NULL);
	iter = res;
	while (count_words--)
	{
		str = skip_splitter_and_get_len(str, c, &len);
		if (!(*iter++ = ft_substr(str, 0, len)))
		{
			ptr_clean(res);
			return (NULL);
		}
		str += len;
	}
	*iter = NULL;
	return (res);
}
