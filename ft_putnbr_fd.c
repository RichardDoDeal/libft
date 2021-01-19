/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahali <mamahali@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:52:46 by mamahali          #+#    #+#             */
/*   Updated: 2021/01/14 15:13:36 by mamahali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*p_buf;
	char	buf[12];
	int		minus;
	int		temp;

	if (fd < 0)
		return ;
	if (n == 0)
	{
		ft_putstr_fd("0", fd);
		return ;
	}
	ft_bzero(&buf, 12);
	minus = n < 0 ? -1 : 0;
	p_buf = buf + 10;
	while (n != 0)
	{
		temp = (n % 10) >= 0 ? n % 10 : (n % 10) * -1;
		*p_buf-- = temp + 48;
		n /= 10;
	}
	*p_buf = minus < 0 ? '-' : 0;
	if (*p_buf == 0)
		p_buf++;
	ft_putstr_fd(p_buf, fd);
}
