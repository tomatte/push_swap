/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:12:02 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/28 21:28:52 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_place_zero(t_lst *a, int place)
{
	if ((a->index & (1 << place)) == 0)
		return (1);
	else
		return (0);
}

static int	get_index_selected(t_lst *a, int place)
{
	a = lst_first(a);
	while (a)
	{
		if (!is_place_zero(a, place))
			return (a->index);
		a = a->next;
	}
	return (-1);
}

static void	push_zeros_to_b(t_lst **a, t_lst **b, int place)
{
	int		index_selected;
	int		i;

	i = 0;
	index_selected = get_index_selected(*a, place);
	while (*a && i < 2)
	{
		*a = lst_first(*a);
		if (is_place_zero(*a, place))
			pb(b, a);
		else
			ra(a);
		if (*a && lst_first(*a)->index == index_selected)
			i++;
	}
}

static void	push_back_to_a(t_lst **a, t_lst **b)
{
	while (*b)
		pa(a, b);
}

void	radix(t_lst *a)
{
	t_lst	*b;
	int		place;

	b = NULL;
	a = lst_first(a);
	place = 0;
	while (!is_lst_sorted(a))
	{
		push_zeros_to_b(&a, &b, place);
		push_back_to_a(&a, &b);
		place++;
	}
}
