
int	ft_isspace_bonus(int c)
{
	if(c == '\f' || c == '\n' || c == '\r'
	   || c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}