/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:59:30 by mamahali          #+#    #+#             */
/*   Updated: 2020/11/10 12:57:05 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *start;

	start = (char *)b;
	while (len > 0)
	{
		*start = (char)c;
		len--;
		start++;
	}
	return (b);
}
