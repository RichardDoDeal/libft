
#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char 	*p_buf;
	char	buf[12];
	int 	minus;
	int 	temp;

	if (n == 0)
		return (ft_substr("0",0,1));
	ft_bzero(&buf, 12);
	minus = n < 0 ? -1 : 0;
	p_buf = buf;
	p_buf += 10;
	temp = 0;
	while (n != 0)
	{
		temp = (n % 10) >= 0 ? n % 10 : (n % 10) * - 1;
		*p_buf = temp + 48;
		n /= 10;
		p_buf--;
	}
	*p_buf = minus < 0 ? '-' : 0;
	if (*p_buf == 0)
		p_buf++;
	return (ft_substr(p_buf, 0, 12));
}

