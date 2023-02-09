/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rotate_algorithm.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:10:26 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/09 15:07:27 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	show(t_lst *a, t_lst *b)
{
	ft_printf("\nList A\n");
	print_lst(a);
	ft_printf("\nList B\n");
	print_lst(b);
}

static void show_s(t_strategy *strategy)
{
	ft_printf("index: %d\t moves: %d\n", strategy->updown_index, strategy->updown_moves);
}

void	push_rotate_algorithm(t_lst **a, t_lst **b, t_strategy *strategy)
{
	while (*b)
	{
		fill_strategy(*a, *b, strategy);
		execute_strategy(a, b, strategy);
	}
	move_to_top_a(a, 0);
}
