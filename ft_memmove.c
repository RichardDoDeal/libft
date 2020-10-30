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

#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;

	dest = dst;
	source = (char *)src;
	while ((*dest && *source) && len > 0)
	{
		*dest = *source;
		dest++;
		source++;
		len--;
	}
	return (dst);
}

