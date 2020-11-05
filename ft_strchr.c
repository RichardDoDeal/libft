/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:26:28 by mamahali          #+#    #+#             */
/*   Updated: 2020/11/05 18:59:11 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** The strchr() function returns a pointer to the first occurrence of the
** character c in the string s.
** The strrchr() function returns a pointer to the last occurrence of the
** character c in the string s.
** The  strchrnul() function is like strchr() except that if c
** is not found in s, then it returns a pointer to the null byte at the end
** of s, rather than NULL.
** Here "character" means "byte"; these functions do not work with
** wide or multibyte characters.
*/

char	*ft_strchr(const char *s, int c)
{
	char *src;

	src = (char *)s;
	while (1)
	{
		if (*src == c)
			return (src);
		if (*src == '\0')
			break ;
		src++;
	}
	return (NULL);
}
