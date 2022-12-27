/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_shift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:17:08 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/27 10:41:36 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*lst_shift(t_lst **lst)
{
	t_lst	*node;

	if (!lst || !*lst)
		return (NULL);
	node = lst_first(*lst);
	*lst = node->next;
	if (*lst)
		(*lst)->prev = NULL;
	node->next = NULL;
	return (node);
}
