/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:18:54 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/31 17:08:47 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	reverse_twister_move(t_lst **b, char **instructions)
{
	int		index;
	
	*b = lst_first(*b);
	index = (*b)->index;
	while (index - 1 != lst_first(*b)->next->index)
	{
		swap(b);
		rotate(b);
		add_instruction(instructions, SB);
		add_instruction(instructions, RB);
	}
	*b = lst_first(*b);
}

void	solve_b(t_lst **b, char **instructions)
{
	int	i;
	int	max_index;

	max_index = lst_size(*b) - 1;
	i = 1;
	while (i <= max_index)
	{
		move_to_top_b(b, i, instructions);
		reverse_twister_move(b, instructions);
		i++;
	}
}

