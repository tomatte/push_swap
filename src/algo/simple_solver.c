/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:31:37 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/17 14:32:09 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simple_solver(t_lst **a, t_lst **b)
{
	int	pos;

	pos = lst_size(*a) - 2;
	while (pos >= 0)
	{
		put_above(a, b, pos);
		pos--;
	}
}
