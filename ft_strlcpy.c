/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:03:17 by mamahali          #+#    #+#             */
/*   Updated: 2020/10/30 15:03:18 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char *dest;
	char *source;

	dest = dst;
	source = (char *)src;

	while (dstsize > 1 && *dest && *src)
	{
		*dest = *source;
		dest++;
		source++;
		dstsize--;
	}
	*dest = '\0';
	return (ft_strlen((char *)src));
}
