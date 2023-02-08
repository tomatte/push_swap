/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_reverse_strategy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:02:02 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 15:31:20 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	show(t_lst *a, t_lst *b)
{
	ft_printf("\nList A\n");
	print_lst(a);
	ft_printf("\nList A\n");
	print_lst(b);
}

static int	get_mutual_reverse_moves(t_lst *a, t_lst *b, int b_index)
{
	int	a_index;
	int	a_reverses;
	int	b_reverses;

	a_index = get_top_index(a, b_index);
	a_reverses = lst_size(a) - get_position(a, a_index);
	b_reverses = lst_size(b) - get_position(b, b_index);
	return (ft_highest(a_reverses, b_reverses));
}

void	fill_reverse_strategy(t_lst *a, t_lst *b, t_strategy *strategy)
{
	int	lowest_moves;
	int	moves;
	int	index;

	first_ab(&a, &b);
	lowest_moves = get_mutual_reverse_moves(a, b, b->index);
	index = b->index;
	while (b->next)
	{
		b = b->next;
		moves = get_mutual_reverse_moves(a, b, b->index);
		if (moves < lowest_moves)
		{
			lowest_moves = moves;
			index = b->index;
		}
	}
	strategy->reverse_index = index;
	strategy->reverse_moves = lowest_moves;
}
