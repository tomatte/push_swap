/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 09:24:53 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/26 15:30:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_lst(t_lst *lst)
{
	if (!lst)
		ft_printf("Empty List\n");
	lst = lst_first(lst);
	while (lst)
	{
		ft_printf("%d\n", lst->num);
		lst = lst->next;
	}
}

/* static void	print_node(t_lst *node)
{
	if (!node)
		ft_printf("NULL\n");
	ft_printf("node: %d\n", node->num);
} */

int	main(int argc, char *argv[])
{
	t_lst	*stack_a;
	t_lst	*stack_b;

	error_management(argc, argv);
	stack_a = get_numbers(argc, argv);
	stack_b = NULL;
	(void) stack_b;
	print_lst(stack_a);
	ft_printf("\n\n");
	swap(stack_a);
	print_lst(stack_a);
	return (0);
}
