/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:04:18 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/26 15:30:55 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_lst *stack)
{
	if (lst_size(stack) < 2)
		return ;
	stack = lst_first(stack);
	stack->prev = stack->next;
	stack->next = stack->next->next;
	stack->prev->prev = NULL;
	stack->prev->next = stack;
}
