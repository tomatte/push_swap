/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rotate_algorithm.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:10:26 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/04 11:16:07 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/* 
 da pra mover a stack_a até o numero correto pra usar o pa()

 mas também da pra mover a stack_b pra ate o numero correto pra dar o pa()

 eu posso fazer essas duas logicas e calcular qual é menos custosa

 */

static void	push_rotate_algorithm(t_lst **a, t_lst **b)
{
	while (!is_lst_sorted(*a))
	{
		get_top_number(*a, *b);
		move_number_to_top(a);
		pa(a, b);
	}
}
