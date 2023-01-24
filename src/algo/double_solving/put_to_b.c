/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_to_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 08:22:36 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/24 08:45:04 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	get_b_last_index(t_lst *a)
{
	int	index;

	index = lst_size(a) * 0.3;
	return (index);
}

void	put_to_b(t_lst **a, t_lst **b)
{
	int	index;
	int	i;

	index = get_b_last_index(*a);
	i = 0;
	while (i <= index)
	{
		*a = lst_first(*a);
		if ((*a)->index <= index)
		{
			pb(b, a);
			i++;
		}
		else
			ra(a);
	}
}
