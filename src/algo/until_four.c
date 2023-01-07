/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   until_four.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:35:10 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 09:54:50 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	two(t_lst *a)
{
	a = lst_first(a);
	if (a->position == 0)
		return ;
	swap(a);
	ft_printf("SA\n");
}

void	until_four(t_lst **a, t_lst **b)
{
	int	size;

	(void) b;
	size = lst_size(*a);
	switch (size)
	{
		case 2:
			two(*a);
			break;
		default :
			return ;
	}
}
