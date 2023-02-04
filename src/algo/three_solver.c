/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_solver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:35:10 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/04 11:02:12 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_biggest_index(t_lst *a)
{
	int	biggest_index;

	biggest_index = a->index;
	while (a->next)
	{
		a = a->next;
		if (a->index > biggest_index)
			biggest_index = a->index;
	}
	return (biggest_index);
}

void	three_solver(t_lst *a)
{
	int	biggest;

	a = lst_first(a);
	biggest = get_biggest_index(a);
	if (a->index == biggest)
		ra(&a);
	else if (a->next->index == biggest)
		rra(&a);
	a = lst_first(a);
	if (a->index > a->next->index)
		sa(&a);
}
