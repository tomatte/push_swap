/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:45:54 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/09 10:04:07 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_lst **s)
{
	t_lst	*last;
	t_lst	*top;
	t_lst	*new_first;
	t_lst	*stack;
	int		size;

	stack = *s;
	size = lst_size(stack);
	if (size <= 1)
		return ;
	if (size == 2)
	{
		swap(&stack);
		return ;
	}
	last = lst_last(stack);
	top = lst_first(stack);
	ft_printf("top: %d\n", top->num);
	last->next = top;
	new_first = top->next;
	top->next = NULL;
	top->prev = last;
	new_first->prev = NULL;
	*s = new_first;
}

void	ra(t_lst **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_lst **b)
{
	rotate(b);
	ft_printf("rb\n");
}
