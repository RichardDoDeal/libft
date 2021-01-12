/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <mamahali@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:32:07 by mamahali          #+#    #+#             */
/*   Updated: 2021/01/12 12:55:39 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n'
    || c == '\v' || c == '\f' || c == '\r')
        return (1);
    return (0);
}