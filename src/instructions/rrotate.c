/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:09:21 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/09 10:42:34 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrotate(t_lst **s)
{
	t_lst	*aux;
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
	stack = lst_last(stack);
	aux = lst_first(stack);
	aux->prev = stack;
	stack->next = aux;
	stack->prev->next = NULL;
	stack->prev = NULL;
	*s = stack;
}

void	rra(t_lst **a)
{
	rrotate(a);
	ft_printf("rra\n");
}

void	rrb(t_lst **b)
{
	rrotate(b);
	ft_printf("rrb\n");
}
