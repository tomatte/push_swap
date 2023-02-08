/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_updown_strategy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:27:48 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 14:56:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	smaller(int x, int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

static int	get_moves(t_lst *stack, int index)
{
	int	size;
	int	position;
	int	rotates;
	int	reverses;

	size = lst_size(stack);
	position = get_position(stack, index);
	if (position < 0)
		return (-1);
	rotates = position;
	reverses = size - position;
	return (smaller(rotates, reverses));
}

static int	get_total_moves(t_lst *a, t_lst *b, int b_index)
{
	int	moves_a;
	int	moves_b;

	moves_b = get_moves(b, b_index);
	moves_a = get_moves(a, get_top_index(a, b_index));
	if (moves_a < 0 || moves_b < 0)
		return (-1);
	return (moves_a + moves_b);
}

void	fill_updown_strategy(t_lst *a, t_lst *b, t_strategy *strategy)
{
	int	cheapest_index;
	int	cheapest_moves;
	int	moves;

	cheapest_index = b->index;
	cheapest_moves = get_total_moves(a, b, b->index);
	while (b->next)
	{
		b = b->next;
		moves = get_total_moves(a, b, b->index);
		if (moves < cheapest_moves)
		{
			cheapest_moves = moves;
			cheapest_index = b->index;
		}
	}
	strategy->updown_index = cheapest_index;
	strategy->updown_moves = cheapest_moves;
}
