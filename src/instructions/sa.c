/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:04:18 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/26 15:24:08 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_lst *lst)
{
	if (lst_size(lst) < 2)
		return ;
	lst = lst_first(lst);
	lst->prev = lst->next;
	lst->next = lst->next->next;
	lst->prev->prev = NULL;
	lst->prev->next = lst;
}
