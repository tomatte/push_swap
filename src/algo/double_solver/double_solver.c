/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:43:27 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/31 10:16:44 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	send_to_b(t_lst **a, t_lst **b, char **instructions)
{
	int	max_index;
	int	i;

	max_index = lst_size(*a) / 2;
	i = 0;
	while (i < max_index)
	{
		if (lst_first(*a)->index < max_index)
		{
			pb(b, a);
			add_instruction(instructions, PB);
			i++;
		}
		else
		{
			ra(a);
			add_instruction(instructions, RA);
		}
	}
}

static void	push_back_to_a(t_lst **a, t_lst **b, char **instructions)
{
	while (*b)
	{
		pa(a, b);
		add_instruction(instructions, PA);
	}
}

static void	show(t_lst *a, t_lst *b)
{
	ft_printf("STACK_A\n");
	print_lst(a);
	ft_printf("STACK_B\n");
	print_lst(b);
}

void	double_solver(t_lst *a)
{
	t_lst	*b;
	char	*a_instructions;
	char	*b_instructions;
	char	*push_instructions;

	a_instructions = ft_strdup("");
	b_instructions = ft_strdup("");
	push_instructions = ft_strdup("");
	b = NULL;
	send_to_b(&a, &b, &push_instructions);
	solve_a(&a, &a_instructions);
	solve_b(&b, &b_instructions);
	push_back_to_a(&a, &b, &push_instructions);
	fill_lst_index(a);
	ft_printf("A: ");
	print_instructions(a_instructions);
	ft_printf("B: ");
	print_instructions(b_instructions);
	//show(a, b);
	//ft_printf("double solver\n");
}
