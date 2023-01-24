/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_above.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:19:03 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/24 08:02:16 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	put_above(t_lst **a, t_lst **b, int position)
{
	while (lst_first(*a)->index != position)
		ra(a);
	*a = lst_first(*a);
	pb(b, a);
	while (lst_first(*a)->index != position + 1)
		ra(a);
	*a = lst_first(*a);
	pa(a, b);
}
