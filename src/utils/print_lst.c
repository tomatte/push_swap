#include "../push_swap.h"

void	print_lst(t_lst *lst)
{
	if (!lst)
		ft_printf("Empty List\n");
	lst = lst_first(lst);
	while (lst)
	{
		ft_printf("%d\t(%d)\n", lst->num, lst->index);
		lst = lst->next;
	}
	ft_printf("\n");
}
