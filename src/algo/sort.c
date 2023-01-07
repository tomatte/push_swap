/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:08:36 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 08:23:46 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	simple_solver(t_lst **a, t_lst **b)
{
	int	pos;

	pos = lst_size(*a) - 2;
	while (pos >= 0)
	{
		put_above(a, b, pos);
		pos--;
	}
}

void	sort(t_lst *a)
{
	t_lst	*b;

	b = NULL;
	simple_solver(&a, &b);
	print_lst(a);
}
