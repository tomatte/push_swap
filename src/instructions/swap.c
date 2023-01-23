/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:40:22 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 19:53:34 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_lst **lst)
{
	t_lst	*first;
	t_lst	*second;
	t_lst	*third;

	if (lst == NULL || *lst == NULL)
		return ;
	if (lst_size(*lst) <= 1)
		return ;
	first = lst_first(*lst);
	second = first->next;
	third	= second->next;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	first->next = third;
	*lst = second;
	if (third)
		third->prev = first;
}
