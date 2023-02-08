/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_move_to_top_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:50:05 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 12:09:38 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rb_move(t_lst **stack, int index, char **instructions)
{
	while (lst_first(*stack)->index != index)
	{
		rotate(stack);
		add_instruction(instructions, RB);
	}
}

static void	rrb_move(t_lst **stack, int index, char **instructions)
{
	while (lst_first(*stack)->index != index)
	{
		reverse_rotate(stack);
		add_instruction(instructions, RRB);
	}
}

void	array_move_to_top_b(t_lst **stack, int index, char **instructions)
{
	int	position;
	int	size;

	size = lst_size(*stack);
	position = get_position(*stack, index);
	if (position > size - position)
		rrb_move(stack, index, instructions);
	else
		rb_move(stack, index, instructions);
}
