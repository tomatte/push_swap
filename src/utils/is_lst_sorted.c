/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lst_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:04:00 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/27 11:13:23 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_lst_sorted(t_lst *a)
{
	int	size;
	int	index;

	a = lst_first(a);
	size = lst_size(a);
	index = -1;
	while (++index < size)
	{
		if (a->index != index)
			return (0);
		a = a->next;
	}
	return (1);
}
