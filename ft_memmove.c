/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:18:22 by mamahali          #+#    #+#             */
/*   Updated: 2020/10/30 13:18:23 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;

	if(dst == NULL && src == NULL && len > 0)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
		if(dest > source)
		{
			dest += len - 1;
			source += len - 1;
			while (len)
			{
				*dest = *source;
				dest--;
				source--;
				len--;
			}
		}
		else
			while(len)
			{
				*dest = *source;
				dest++;
				source++;
				len--;
			}
	return (dst);
}

