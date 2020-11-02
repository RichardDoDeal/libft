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

#include <stdlib.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *dest;
	char *source;
	char sb;

	sb = (char)c;
	dest = (char *)dst;
	source = (char *)src;
	while (1)
	{
		*dest = *source;
		if (*dest == sb)
			return (dest + 1);
		dest++;
		source++;
		n--;
		if(n == 0)
			break ;
	}
	return (NULL);
}
