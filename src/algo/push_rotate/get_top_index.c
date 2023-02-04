/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_top_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:55:48 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/04 14:49:33 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/* se for menor que todos, mover o antigo menor pro topo

se for maior que todos, mover o antigo maior pro topo


entre maior relativo e menor relativo
		if (a->index > b->index && a->index < top_index)
			top_index = a->index;
		ra(a)
	return (top_index); */

static int	get_smallest(t_lst *a, t_lst *b)
{
	int	smallest_a;

	smallest_a = a->index;
	while (a)
	{
		if (a->index < b->index)
			return (-1);
		if (a->index < smallest_a)
			smallest_a = a->index;
		a = a->next;
	}
	return (smallest_a);
}

int	get_top_index(t_lst *a, t_lst *b)
{
	int	top;

	a = lst_first(a);
	b = lst_first(b);
	top = get_smallest(a, b);
	if (top >= 0)
		return (top);
	//top = get_biggest()
	return (top);
}
