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

char	*search_end(const char *str)
{
	char *res;

	res = (char *)str;
	while (*str != '\0')
	{
		if (!ft_isdigit(*str) || !ft_isdigit(*(str + 1)))
			break ;
		str++;
		res++;
	}
	return (res);
}

int	check_space(int c)
{
	if(c == '\f' || c == '\n' || c == '\r'
	   || c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	size_t		result;
	char	*end;
	int		minus;

	result = 0;
	end = (char *)str;
	minus = 1;
	while (check_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		minus = *str == '-' ? minus * -1 : minus;
		str++;
		while (*str == '0')
			str++;
	}
	if (!ft_isdigit(*str))
		return (result);
	end = search_end(str);
	while (end >= str)
	{
		result += (*end-- - 48) * minus;
		minus *= 10;
	}
	return (result);
}
