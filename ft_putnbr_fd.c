#include "libft.h"

static int	get_char_number(int rem)
{
	int	val;

	if (rem >= 0)
		val = rem;
	else
		val = rem * -1;
	return (val);
}

int	zero_func(int num, int fd)
{
	if (num == 0)
	{
		ft_putstr_fd("0", fd);
		return (1);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*p_buf;
	char	buf[12];
	int		minus;

	if (fd < 0)
		return ;
	if (zero_func(n, fd))
		return ;
	ft_bzero(&buf, 12);
	minus = 0;
	if (n < 0)
		minus = -1;
	p_buf = buf + 10;
	while (n != 0)
	{
		*p_buf-- = get_char_number(n % 10) + 48;
		n /= 10;
	}
	if (minus < 0)
		*p_buf = '-';
	if (*p_buf == 0)
		p_buf++;
	ft_putstr_fd(p_buf, fd);
}
