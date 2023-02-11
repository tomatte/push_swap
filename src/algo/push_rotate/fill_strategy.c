/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_strategy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:10:09 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/11 15:16:15 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	fill_strategy(t_lst *a, t_lst *b, t_strategy *strategy)
{
	first_ab(&a, &b);
	fill_updown_strategy(a, b, strategy);
	fill_rotate_strategy(a, b, strategy);
	fill_reverse_strategy(a, b, strategy);
}
