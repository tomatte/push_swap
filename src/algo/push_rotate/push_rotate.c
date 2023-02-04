/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:47:54 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/04 11:21:50 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	push_to_b(t_lst **a, t_lst **b)
{
	int	size_b;
	int	i;

	size_b = lst_size(*a) - 3;
	i = 0;
	while (i < size_b)
	{
		pb(b, a);
		i++;
	}
}

void	push_rotate(t_lst *a)
{
	t_lst	*b;

	b = NULL;
	push_to_b(&a, &b);

	ft_printf("A:\n");
	print_lst(a);
	ft_printf("B:\n");
	print_lst(b);

/* 	three_solver(a);
	push_rotate_algorithm(&a, &b); */
}
