/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:21:48 by mamahali          #+#    #+#             */
/*   Updated: 2020/11/05 18:39:47 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char sb;
	char *src;

	src = (char *)s;
	sb = (char)c;
	while (n > 0)
	{
		if (*src == sb)
			return (src);
		src++;
		n--;
	}
	return (NULL);
}
