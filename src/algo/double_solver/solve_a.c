/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:18:54 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/29 15:32:51 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	solve_a(t_lst **a)
{
	int	i;

	fill_lst_index(*a);
	i = lst_size(*a) - 2;
	while (i >= 0)
	{
		move_to_top(a, i);
		twister_move(a);
		i--;
	}
}