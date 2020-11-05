/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:30:55 by mamahali          #+#    #+#             */
/*   Updated: 2020/11/05 18:52:34 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*source;
	size_t	src_count;
	size_t	dst_count;
	size_t	res_count;

	source = (char *)src;
	src_count = ft_strlen(source);
	dst_count = ft_strlen(dst);
	res_count = (dstsize < dst_count ? dstsize : dst_count) + src_count;
	while (*dst)
		dst++;
	while (dstsize - dst_count - 1 <= dstsize && *source)
	{
		if (dstsize == dst_count + 1)
			break ;
		*dst = *source;
		dst++;
		source++;
		dst_count++;
	}
	*dst = '\0';
	return (res_count);
}
