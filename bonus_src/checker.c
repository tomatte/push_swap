/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:56:55 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/14 14:43:02 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker.h"

static void	verify_sort(t_lst *stack_a, t_lst *stack_b)
{
	if (stack_b != NULL)
		ft_printf("KO\n");
	else if (is_lst_sorted(stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

static void	clear_memory(t_lst *stack, char *codes)
{
	lst_clear(stack);
	free(codes);
}

int	main(int argc, char *argv[])
{
	t_lst	*stack_a;
	t_lst	*stack_b;
	char	*instruction_codes;

	error_management_checker(argc, argv);
	instruction_codes = read_instructions();
	stack_a = get_numbers(argc, argv);
	fill_lst_index(stack_a);
	execute_instructions(&stack_a, &stack_b, instruction_codes);
	verify_sort(stack_a, stack_b);
	clear_memory(stack_a, instruction_codes);
	return (0);
}
