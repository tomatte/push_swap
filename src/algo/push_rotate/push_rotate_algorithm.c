/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rotate_algorithm.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:10:26 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/04 16:06:07 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_rotate_algorithm(t_lst **a, t_lst **b)
{
	int	index_top;

	*a = lst_first(*a);
	*b = lst_first(*b);
	while (*b)
	{
		index_top = get_top_index(*a, *b);
		move_to_top(a, index_top);
		pa(a, b);
	}
	move_to_top(a, 0);
}
