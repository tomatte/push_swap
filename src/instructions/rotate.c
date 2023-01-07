/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:45:54 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 10:36:36 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(void)
{
	ft_printf("ra\n");
}

void	rb(void)
{
	ft_printf("rb\n");
}

void	rotate(t_lst *stack)
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
	stack = lst_first(stack);
	aux = lst_last(stack);
	aux->next = stack;
	stack->prev = aux;
	stack->next->prev = NULL;
	stack->next = NULL;
}
