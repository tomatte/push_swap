/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_strategy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:10:09 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/09 14:08:41 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	show(t_lst *a, t_lst *b)
{
	ft_printf("\nList A\n");
	print_lst(a);
	ft_printf("\nList B\n");
	print_lst(b);
}

void	fill_strategy(t_lst *a, t_lst *b, t_strategy *strategy)
{
	first_ab(&a, &b);
	fill_updown_strategy(a, b, strategy);
	fill_rotate_strategy(a, b, strategy);
	fill_reverse_strategy(a, b, strategy);
}
