/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:35:10 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 15:06:20 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three(t_lst *a)
{
	a = lst_first(a);
	if (a->position == 0 && a->next->position == 2)
	{
		rra(a);
		sa(a);
	}
	else if (a->position == 1 && a->next->position == 0)
		sa(a);
	else if (a->position == 1 && a->next->position == 2)
		rra(a);
	else if (a->position == 2 && a->next->position == 0)
		ra(a);
	else if (a->position == 2 && a->next->position == 1)
	{
		ra(a);
		sa(a);
	}
}
