/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:09:21 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/30 10:16:38 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrotate(t_lst *stack)
{
	t_lst	*aux;
	int		size;

	size = lst_size(stack);
	if (size <= 1)
		return ;
	if (size == 2)
	{
		swap(stack);
		return ;
	}
	stack = lst_last(stack);
	aux = lst_first(stack);
	aux->prev = stack;
	stack->next = aux;
	stack->prev->next = NULL;
	stack->prev = NULL;
}