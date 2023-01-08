/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:35:10 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/08 14:36:37 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three(t_lst *a)
{
	a = lst_first(a);
	if (a->index == 0 && a->next->index == 2)
	{
		rra(a);
		sa(a);
	}
	else if (a->index == 1 && a->next->index == 0)
		sa(a);
	else if (a->index == 1 && a->next->index == 2)
		rra(a);
	else if (a->index == 2 && a->next->index == 0)
		ra(a);
	else if (a->index == 2 && a->next->index == 1)
	{
		ra(a);
		sa(a);
	}
}