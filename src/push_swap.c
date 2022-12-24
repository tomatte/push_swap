/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 09:24:53 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/24 19:51:27 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_lst(t_lst *lst)
{
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
	t_lst	*node;
	//t_lst	*aux;
	error_management(argc, argv);

	node = lst_new(10);
	lst_unshift(node, lst_new(9));
	lst_unshift(node, lst_new(8));
	//print_lst(node);
	lst_push(node, lst_new(99));
	lst_push(node, lst_new(1));
	print_lst(node);
	lst_clear(node);
	return (0);
}
