/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:04:18 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 10:35:36 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(void)
{
	ft_printf("sa\n");
}

void	sb(void)
{
	ft_printf("sb\n");
}

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
