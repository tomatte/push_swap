/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:37:53 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/31 13:50:05 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	inst_print(char inst)
{
	if (inst == SA)
		ft_printf("sa\n");
	else if (inst == SB)
		ft_printf("sb\n");
	else if (inst == SS)
		ft_printf("ss\n");
	else if (inst == RA)
		ft_printf("ra\n");
	else if (inst == RB)
		ft_printf("rb\n");
	else if (inst == RR)
		ft_printf("rr\n");
	else if (inst == RR)
		ft_printf("rra\n");
	else if (inst == RR)
		ft_printf("rrb\n");
	else if (inst == RRR)
		ft_printf("rrr\n");
	else if (inst == PA)
		ft_printf("pa\n");
	else if (inst == SB)
		ft_printf("pb\n");
}

void	print_instructions(char *instructions)
{
	while (*instructions)
		inst_print(*instructions++);
}
