/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:57:16 by mamahali          #+#    #+#             */
/*   Updated: 2020/10/30 19:57:18 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int search_need(const char *hay, char *nd, size_t hay_pos)
{
	size_t inner_pos;

	inner_pos = 0;
	while (*nd)
	{
		if (*nd != *(hay + hay_pos + inner_pos))
			break;
		inner_pos++;
		nd++;
		if (!*nd)
			return (1);
	}
	return (0);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char 	*hay;
	char 	*need;
	size_t	hay_pos;
	size_t	need_len;

	if (haystack == NULL && needle == NULL)
		return (NULL);
	hay = (char *)haystack;
	need = (char *)needle;
	need_len = ft_strlen(need);
	hay_pos = 0;
	if (!need_len)
		return (hay);
	while (*(hay + hay_pos) && hay_pos + need_len <= len)
	{
		if(search_need(hay, need,hay_pos))
				return (hay + hay_pos);
		hay_pos++;
	}
	return (NULL);
}
