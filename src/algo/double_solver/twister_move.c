/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twister_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:08:22 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/29 10:12:31 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//keeps swaping and rotating to get index above index + 1
void	twister_move(t_lst **a)
{
	int		index;
	
	*a = lst_first(*a);
	index = (*a)->index;
	while (index + 1 != lst_first(*a)->next->index)
	{
		sa(a);
		ra(a);
	}
	*a = lst_first(*a);
}
