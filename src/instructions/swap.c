/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:04:18 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/09 10:02:30 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_lst **s)
{
	t_lst	*aux;
	t_lst	*stack;

	stack = *s;
	if (lst_size(stack) < 2)
		return ;
	stack = lst_first(stack);
	aux = stack->next;
	stack->prev = aux;
	aux->prev = NULL;
	stack->next = aux->next;
	aux->next = stack;
	*s = aux;
}

void	sa(t_lst **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_lst **b)
{
	swap(b);
	ft_printf("sb\n");
}
