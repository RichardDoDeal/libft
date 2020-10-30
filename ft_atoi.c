/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <mamahali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:49:12 by mamahali          #+#    #+#             */
/*   Updated: 2020/10/28 21:39:22 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_razor(const char *str)
{
	int res;

	res = 1;
	while (*str != '\0')
	{
		if (!ft_isdigit(*str) || !ft_isdigit(*(str + 1)))
			break ;
		str++;
		res *= 10;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int				result;
	int				razor;
	int				minus;

	result = 0;
	razor = 1;
	minus = 1;
	if (*str == '-')
	{
		minus *= -1;
		str++;
	}
	if (!ft_isdigit(*str))
		return (result);
	razor = get_razor(str);
	while (razor > 0)
	{
		result += (*str - 48) * razor * minus;
		razor /= 10;
		str++;
	}
	return (result);
}
