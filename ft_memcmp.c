/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:40:08 by mamahali          #+#    #+#             */
/*   Updated: 2020/11/05 18:49:50 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *src1;
	unsigned char *src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n != 0)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		n--;
		src1++;
		src2++;
	}
	return (0);
}
