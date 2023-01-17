/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 09:24:53 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/09 08:18:24 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* static void	twister_move(t_lst *stack)
{
	stack = lst_first(stack);
	while (stack->next->index != stack->index + 1)
	{
		sa(stack);
		ra(stack);
		//print_lst(stack);
	}
}

static void	instruc_test(t_lst *stack)
{
	sa(stack);
	ra(stack);
	twister_move(stack);
	//print_lst(stack);
} */

int	main(int argc, char *argv[])
{
	t_lst	*stack_a;

	error_management(argc, argv);
	stack_a = get_numbers(argc, argv);
	fill_lst_index(stack_a);
	//instruc_test(stack_a);
	sort(stack_a);
	//lst_clear(stack_a);
	return (0);
}

/* 
	OK ordenar os numeros normalmente em um array de inteiros e fzr um sorting
	OK add position field na linked list para guardar a posição de cada numero na stack

	OK criar um algoritmo que coloque um numero na sua respectiva posição
	OK fazer um loop ate que todos os numeros estejam na posição correta

	criar um algoritmo que coloque metade dos numeros mais baixos na stack b
	ordenar esses numeros do maior pro menor

	criar algoritmo que compare as instruções geradas pelas duas stacks e combine as semelhantes
	exemplo: SA e SB == SS

 1 3 5 2
 6 4 7 8

6 5 7 8
1 3 2 4


70% 30%

 */
