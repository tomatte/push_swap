/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 22:14:47 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/28 22:36:58 by dbrandao         ###   ########.fr       */
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

static void	reverse_two_solver(t_lst **b)
{
	*b = lst_first(*b);
	if ((*b)->index == 1)
		return ;
	sa(b);
}

static void	push_back_to_a(t_lst **a, t_lst **b)
{
	while (*b)
		pa(a, b);
}

void	five_solver(t_lst *a)
{
	t_lst	*b;

	b = NULL;
	move_to_b(&a, &b);
	reverse_two_solver(&b);
	fill_lst_index(a);
	three_solver(a);
	push_back_to_a(&a, &b);
	fill_lst_index(a);
}
