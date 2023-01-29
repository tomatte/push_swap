/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:50:05 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/28 21:55:42 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ra_move(t_lst **stack, int index)
{
	while (lst_first(*stack)->index != index)
	{
		ra(stack);
	}
}

static void	rra_move(t_lst **stack, int index)
{
	while (lst_first(*stack)->index != index)
	{
		rra(stack);
	}
}

void	move_to_top(t_lst **stack, int index)
{
	int	position;
	int	size;

	size = lst_size(*stack);
	position = get_position(*stack, index);
	if (position > size - position)
		rra_move(stack, index);
	else
		ra_move(stack, index);
}
