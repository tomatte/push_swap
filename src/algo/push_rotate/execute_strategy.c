/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_strategy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:47:52 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/11 15:39:09 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	execute_updown(t_lst **a, t_lst **b, t_strategy *strategy)
{
	int	a_index;

	first_ab(a, b);
	a_index = get_top_index(*a, strategy->updown_index);
	move_to_top_a(a, a_index);
	move_to_top_b(b, strategy->updown_index);
}

static void	execute_rotates(t_lst **a, t_lst **b, t_strategy *strategy)
{
	int	a_index;

	a_index = get_top_index(*a, strategy->rotate_index);
	while (lst_first(*a)->index != a_index
		&& lst_first(*b)->index != strategy->rotate_index)
	{
		rr(a, b);
	}
	move_to_top_a(a, a_index);
	move_to_top_b(b, strategy->rotate_index);
}

static void	execute_reverses(t_lst **a, t_lst **b, t_strategy *strategy)
{
	int	a_index;

	a_index = get_top_index(*a, strategy->reverse_index);
	while (lst_first(*a)->index != a_index
		&& lst_first(*b)->index != strategy->reverse_index)
	{
		rrr(a, b);
	}
	move_to_top_a(a, a_index);
	move_to_top_b(b, strategy->reverse_index);
}

void	execute_strategy(t_lst **a, t_lst **b, t_strategy *strategy)
{
	int	rotates;
	int	reverses;
	int	updowns;

	rotates = strategy->rotate_moves;
	reverses = strategy->reverse_moves;
	updowns = strategy->updown_moves;
	if (updowns <= reverses && updowns <= rotates)
		execute_updown(a, b, strategy);
	else if (rotates <= reverses && rotates <= updowns)
		execute_rotates(a, b, strategy);
	else
		execute_reverses(a, b, strategy);
	pa(a, b);
}
