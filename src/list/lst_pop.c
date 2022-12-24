/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:28:15 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/24 19:32:07 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*lst_pop(t_lst *lst)
{
	t_lst	*node;

	node = lst_last(lst);
	lst = node->prev;
	lst->next = NULL;
	node->prev = NULL;
	return (node);
}
