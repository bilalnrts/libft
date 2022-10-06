#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*f;

	f = malloc(sizeof(t_list));
	if (!f)
		return (0);
	f->content = content;
	f->next = 0;
	return (f);
}
