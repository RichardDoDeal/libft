/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:40:08 by mamahali          #+#    #+#             */
/*   Updated: 2020/10/30 14:40:09 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *src1;
	char *src2;

	src1 = (char *)s1;
	src2 = (char *)s2;
	while (n > 0)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		n--;
		src1++;
		src2++;
	}
	return (0);
}

