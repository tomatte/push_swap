/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:08:36 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/27 09:11:01 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_lst *a)
{
	int		size;

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
			ft_printf("radix\n");
	}
}
