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
//need strncmp
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char 	*hay;
	char 	*need;
	size_t 	max_search;


	hay = (char *)haystack;
	need = (char *)needle;
	//if (*need == "")
	//	return (hay);
	max_search = len + ft_strlen(need) + 1;
	while (hay <= haystack + max_search)
	{
		hay++;
		if(*hay == *need)
		{
			hay++;
			need++;
		}
		else
			need = (char *)needle;
		if (*need == '\0')
			break ;
	}
	return (hay - ft_strlen(need));
}
