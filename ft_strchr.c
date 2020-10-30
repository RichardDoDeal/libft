/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:26:28 by mamahali          #+#    #+#             */
/*   Updated: 2020/10/30 19:26:29 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
	char *src;

	src = (char *)s;
	while (1)
	{
		if (*src == c)
			return (src);
		if (*src == '\0')
			break ;
		src++;
	}
	return (NULL);
}

