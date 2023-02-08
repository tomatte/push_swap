/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:50:05 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 11:17:59 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rb_move(t_lst **stack, int index)
{
	while (lst_first(*stack)->index != index)
		rb(stack);
}

static void	rrb_move(t_lst **stack, int index)
{
	while (lst_first(*stack)->index != index)
		rrb(stack);
}

void	move_to_top_b(t_lst **stack, int index)
{
	int	position;
	int	size;

	size = lst_size(*stack);
	position = get_position(*stack, index);
	if (position > size - position)
		rrb_move(stack, index);
	else
		rb_move(stack, index);
}
