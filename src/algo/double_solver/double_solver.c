/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:43:27 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/31 17:56:36 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	send_to_b(t_lst **a, t_lst **b, char **instructions)
{
	int	max_index;
	int	i;

	max_index = lst_size(*a) * 0.5;
	i = 0;
	while (i < max_index)
	{
		if (lst_first(*a)->index < max_index)
		{
			push(b, a);
			add_instruction(instructions, PB);
			i++;
		}
		else
		{
			rotate(a);
			add_instruction(instructions, RA);
		}
	}
}

static void	push_back_to_a(t_lst **a, t_lst **b, char **instructions)
{
	while (*b)
	{
		push(a, b);
		add_instruction(instructions, PA);
	}
}

static void	clear_instructions(t_data *data)
{
	free(data->b_pushs);
	free(data->merge);
	free(data->a_pushs);
	free(data->a_instructions);
	free(data->b_instructions);
}

static void	init_variables(t_data *data, t_lst **b)
{
	data->a_instructions = ft_strdup("");
	data->b_instructions = ft_strdup("");
	data->a_pushs = ft_strdup("");
	data->b_pushs = ft_strdup("");
	*b = NULL;
}

void	double_solver(t_lst *a)
{
	t_lst	*b;
	t_data	data;

	init_variables(&data, &b);
	send_to_b(&a, &b, &data.b_pushs);
	solve_a(&a, &data.a_instructions);
	solve_b(&b, &data.b_instructions);
	data.merge = simple_merge(data.a_instructions, data.b_instructions);
	push_back_to_a(&a, &b, &data.a_pushs);
	fill_lst_index(a);
	print_instructions(data.b_pushs, data.merge, data.a_pushs);
	clear_instructions(&data);
}
