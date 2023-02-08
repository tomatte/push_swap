/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_top_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:55:48 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 15:09:41 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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

static int	get_lowest_to_top(t_lst *a, int b_index)
{
	int	lowest;
	int	highest;

	lowest = get_lowest_index(a);
	highest = get_highest_index(a);
	if (b_index < lowest || b_index > highest)
		return (lowest);
	return (-1);
}

static int	get_index_above(t_lst *a, int b_index)
{
	int	index_above;

	index_above = get_highest_index(a);
	while (a)
	{
		if (a->index > b_index && a->index < index_above)
			index_above = a->index;
		a = a->next;
	}
	return (index_above);
}

int	get_top_index(t_lst *a, int b_index)
{
	int	top;

	a = lst_first(a);
	top = get_lowest_to_top(a, b_index);
	if (top >= 0)
		return (top);
	return (get_index_above(a, b_index));
}
