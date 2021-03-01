#include "libft.h"

static char	*search_end(const char *str)
{
	char	*res;

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

static int	check_space(int c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}

static void	skip_char(const char **str, char c)
{
	while (**str == c)
		*(str) += 1;
}

int	ft_atoi(const char *str)
{
	size_t	result;
	char	*end;
	int		minus;

	result = 0;
	end = (char *)str;
	minus = 1;
	while (check_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = minus * -1;
		str++;
		skip_char(&str, '0');
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
