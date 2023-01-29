/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 22:14:47 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/28 22:27:56 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	move_to_b(t_lst **a, t_lst **b)
{
	while (lst_size(*b) < 2)
	{
		if (lst_first(*a)->index <= 1)
			pb(b, a);
		else
			ra(a);
	}
}

void	five_solver(t_lst *a)
{
	t_lst	*b;

	b = NULL;
	move_to_b(&a, &b);

	ft_printf("STACK_A:\n");
	print_lst(a);
	ft_printf("STACK_B:\n");
	print_lst(b);
	exit(0);
}
