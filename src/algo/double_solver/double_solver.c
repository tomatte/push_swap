/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:43:27 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/29 17:37:43 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	send_to_b(t_lst **a, t_lst **b)
{
	int	max_index;
	int	i;

	max_index = lst_size(*a) * 0.4;
	i = 0;
	while (i < max_index)
	{
		if (lst_first(*a)->index < max_index)
		{
			pb(b, a);
			i++;
		}
		else
			ra(a);
	}
}

static void	push_back_to_a(t_lst **a, t_lst **b)
{
	while (*b)
		pa(a, b);
}

static void	show(t_lst *a, t_lst *b)
{
	ft_printf("STACK_A\n");
	print_lst(a);
	ft_printf("STACK_B\n");
	print_lst(b);
}

void	double_solver(t_lst *a)
{
	t_lst	*b;

	b = NULL;
	send_to_b(&a, &b);
	solve_a(&a);
	solve_b(&b);
	push_back_to_a(&a, &b);
	fill_lst_index(a);
	//show(a, b);
	//ft_printf("double solver\n");
}
