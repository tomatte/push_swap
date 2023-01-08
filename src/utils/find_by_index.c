/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_by_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:18:07 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/08 15:19:52 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*find_by_index(t_lst *stack, int index)
{
	stack = lst_first(stack);
	while (stack)
	{
		if (stack->index == index)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
