/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rotate_algorithm.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:10:26 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/11 15:18:51 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_rotate_algorithm(t_lst **a, t_lst **b, t_strategy *strategy)
{
	while (*b)
	{
		fill_strategy(*a, *b, strategy);
		execute_strategy(a, b, strategy);
	}
	move_to_top_a(a, 0);
}
