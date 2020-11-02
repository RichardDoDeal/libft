/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:30:55 by mamahali          #+#    #+#             */
/*   Updated: 2020/10/30 16:30:58 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *end_dest;
	char *source;
	int src_count;
	size_t res;

	source = (char *)src;
	src_count = (int)ft_strlen(source);
	end_dest = dst;
	res = ft_strlen(dst) + src_count;
	while(*end_dest)
		end_dest++;
	while ((int)dstsize > src_count && *source)
	{
		*end_dest = *source;
		end_dest++;
		source++;
		src_count++;
	}
	*end_dest = '\0';
	return (res);
}
/*
int main(void)
{
	char    *dest;
	int             dest_len;

	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
		return (0);
	memset(dest, 0, dest_len);
	memset(dest, 'r', 6);

	printf("%lu\n", ft_strlcat(dest, "lorem ipsum", 15));
	printf("%lu\n", strlcat(dest, "lorem ipsum", 15));
	free(dest);
}
 */
