/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_rotate_strategy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:03:08 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/11 15:16:04 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	get_mutual_rotate_moves(t_lst *a, t_lst *b, int b_index)
{
	int	a_index;
	int	a_rotates;
	int	b_rotates;

	a_index = get_top_index(a, b_index);
	a_rotates = get_position(a, a_index);
	b_rotates = get_position(b, b_index);
	return (ft_highest(a_rotates, b_rotates));
}

void	fill_rotate_strategy(t_lst *a, t_lst *b, t_strategy *strategy)
{
	int	lowest_moves;
	int	moves;
	int	index;

	first_ab(&a, &b);
	lowest_moves = get_mutual_rotate_moves(a, b, b->index);
	index = b->index;
	while (b->next)
	{
		b = b->next;
		moves = get_mutual_rotate_moves(a, b, b->index);
		if (moves < lowest_moves)
		{
			lowest_moves = moves;
			index = b->index;
		}
	}
	strategy->rotate_index = index;
	strategy->rotate_moves = lowest_moves;
}
