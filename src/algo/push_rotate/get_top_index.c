/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_top_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:55:48 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/04 15:35:18 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/* se for menor que todos, mover o antigo menor pro topo

se for maior que todos, mover o antigo maior pro topo


entre maior relativo e menor relativo
		if (a->index > b->index && a->index < top_index)
			top_index = a->index;
		ra(a)
	return (top_index); */

static int	get_lowest_index(t_lst *stack)
{
	int	lowest;

	stack = lst_first(stack);
	lowest = stack->index;
	while (stack->next)
	{
		stack = stack->next;
		if (stack->index < lowest)
			lowest = stack->index;
	}
	return (lowest);
}

static int	get_highest_index(t_lst *stack)
{
	int	highest;

	stack = lst_first(stack);
	highest = stack->index;
	while (stack->next)
	{
		stack = stack->next;
		if (stack->index > highest)
			highest = stack->index;
	}
	return (highest);
}

static int	get_lowest_to_top(t_lst *a, t_lst *b)
{
	int	lowest;
	int	highest;

	lowest = get_lowest_index(a);
	highest = get_highest_index(a);
	if (b->index < lowest || b->index > highest)
		return (lowest);
	return (-1);
}



int	get_top_index(t_lst *a, t_lst *b)
{
	int	top;

	top = get_lowest_to_top(a, b);
	if (top >= 0)
		return (top);
	// top = get_bigger_between()
	return (top);
}
