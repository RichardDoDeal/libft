/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <mamahali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:53:00 by mamahali          #+#    #+#             */
/*   Updated: 2020/11/05 18:53:18 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*res;
	char	*str;
	char	*cp;

	str = (char *)s;
	len = ft_strlen((char *)s);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	cp = res;
	while (*str)
	{
		*cp = *str;
		cp++;
		str++;
	}
	*cp = '\0';
	return (res);
}
