/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:58:07 by mamahali          #+#    #+#             */
/*   Updated: 2020/10/30 12:58:10 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *dest;
	char *source;

	dest = (char *)dst;
	source = (char *)src;
	while (n >= 0)
	{
		if (*dest == (char)c)
			return (dest + 1);
		*dest = *source;
		dest++;
		source++;
		n--;
	}
	return (NULL);
}
