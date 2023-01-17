/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twister_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:42:17 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/17 18:51:27 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	twister_move(t_lst **s)
{
	int		index;
	t_lst	*stack;
	
	stack = *s;
	stack = lst_first(stack);
	index = stack->index;
	while (index + 1 != lst_first(stack)->next->index)
	{
		sa(stack);
		ra(stack);
	}
}
