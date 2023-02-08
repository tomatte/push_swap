/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_move_to_top_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:50:05 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 11:18:51 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ra_move(t_lst **stack, int index, char **instructions)
{
	while (lst_first(*stack)->index != index)
	{
		rotate(stack);
		add_instruction(instructions, RA);
	}
}

static void	rra_move(t_lst **stack, int index, char **instructions)
{
	while (lst_first(*stack)->index != index)
	{
		reverse_rotate(stack);
		add_instruction(instructions, RRA);
	}
}

void	array_move_to_top_a(t_lst **stack, int index, char **instructions)
{
	int	position;
	int	size;

	size = lst_size(*stack);
	position = get_position(*stack, index);
	if (position > size - position)
		rra_move(stack, index, instructions);
	else
		ra_move(stack, index, instructions);
}
