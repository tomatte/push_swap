/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:18:54 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/29 17:22:27 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	reverse_twister_move(t_lst **b)
{
	int		index;
	
	*b = lst_first(*b);
	index = (*b)->index;
	while (index - 1 != lst_first(*b)->next->index)
	{
		sb(b);
		rb(b);
	}
	*b = lst_first(*b);
}

void	solve_b(t_lst **b)
{
	int	i;
	int	max_index;

	max_index = lst_size(*b) - 1;
	i = 1;
	while (i <= max_index)
	{
		move_to_top(b, i);
		reverse_twister_move(b);
		i++;
	}
}

