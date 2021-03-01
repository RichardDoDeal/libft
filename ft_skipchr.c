void	ft_skipchr(char **str, char skip)
{
	while ((**str) == skip)
		(*str)++;
}
