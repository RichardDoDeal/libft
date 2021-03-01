/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <mamahali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:55:59 by mamahali          #+#    #+#             */
/*   Updated: 2020/11/10 14:16:42 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(char *str, char c)
{
	size_t	len;

	len = 0;
	while (*str && *str != c)
	{
		len++;
		str++;
	}
	return (len);
}

static char	*skip_splitter_and_get_len(char *str, char c, size_t *len)
{
	while (*str == c)
		str++;
	*len = get_len(str, c);
	return (str);
}

static size_t	get_count_words(char *str, int c)
{
	size_t	count;

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

static char	**ptr_clean(char **res)
{
	char	**iter;

	iter = res;
	while (*iter)
	{
		free(*iter);
		iter++;
	}
	free(res);
	return (NULL);
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
	res = malloc(sizeof(char *) * (count_words + 1));
	if (!res)
		return (NULL);
	iter = res;
	while (count_words--)
	{
		str = skip_splitter_and_get_len(str, c, &len);
		*iter = ft_substr(str, 0, len);
		if (!*iter++)
			return (ptr_clean(res));
		str += len;
	}
	*iter = NULL;
	return (res);
}
