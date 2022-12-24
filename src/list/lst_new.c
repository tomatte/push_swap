/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:22:34 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/24 13:02:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*lst_new(int num)
{
	t_lst	*node;

	node = (t_lst *) malloc(sizeof(t_lst));
	if (!node)
		return (NULL);
	node->prev = NULL;
	node->next = NULL;
	node->num = num;
	return (node);
}
