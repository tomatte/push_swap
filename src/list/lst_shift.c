/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_shift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:17:08 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/24 19:22:10 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*lst_shift(t_lst *lst)
{
	t_lst	*node;

	node = lst_first(lst);
	lst = node->next;
	node->next = NULL;
	lst->prev = NULL;
	return (node);
}
