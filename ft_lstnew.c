
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*el;

	if (!(el = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	el->content = content;
	el->next = NULL;
	return (el);
}
