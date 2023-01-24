/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:08:36 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 22:49:54 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_lst *a)
{
	t_lst	*b;
	int		size;

	b = NULL;
	size = lst_size(a);
	switch (size)
	{
		case 2:
			two_solver(a);
			break ;
		case 3:
			three_solver(a);
			break ;
		default :
			simple_solver(&a, &b);
	}
	//print_lst(a);
}
