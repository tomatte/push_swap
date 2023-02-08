/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rotate_algorithm.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:10:26 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 11:20:08 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_rotate_algorithm(t_lst **a, t_lst **b)
{
	int	index_top;
	int	cheapest_index;

	*a = lst_first(*a);
	*b = lst_first(*b);
	while (*b)
	{
		cheapest_index = get_cheapest_index(*a, *b);
		index_top = get_top_index(*a, cheapest_index);
		move_to_top_a(a, index_top);
		move_to_top_b(b, cheapest_index);
		pa(a, b);
	}
	move_to_top(a, 0);
}
