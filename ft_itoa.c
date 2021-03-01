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

char	*ft_itoa(int n)
{
	char	*p_buf;
	char	buf[12];
	int		minus;

	if (n == 0)
		return (ft_substr("0", 0, 1));
	ft_bzero(&buf, 12);
	minus = 0;
	if (n < 0)
		minus = -1;
	p_buf = buf;
	p_buf += 10;
	while (n != 0)
	{
		*p_buf = get_char_number(n % 10) + 48;
		n /= 10;
		p_buf--;
	}
	if (minus < 0)
		*p_buf = '-';
	if (*p_buf == 0)
		p_buf++;
	return (ft_substr(p_buf, 0, 12));
}
