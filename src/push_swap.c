/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 09:24:53 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/06 13:41:56 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_lst(t_lst *lst)
{
	if (!lst)
		ft_printf("Empty List\n");
	lst = lst_first(lst);
	while (lst)
	{
		ft_printf("num: %d\tpos: %d\n", lst->num, lst->final_position);
		lst = lst->next;
	}
}

/* static void	print_node(t_lst *node)
{
	if (!node)
		ft_printf("NULL\n");
	ft_printf("node: %d\n", node->num);
} */

static void	clear_stacks(t_lst *stack_a, t_lst *stack_b)
{
	lst_clear(stack_a);
	lst_clear(stack_b);
}

int	main(int argc, char *argv[])
{
	t_lst	*stack_a;
	t_lst	*stack_b;

	error_management(argc, argv);
	stack_a = get_numbers(argc, argv);
	stack_b = NULL;
	fill_lst_position(stack_a);
	print_lst(stack_a);
	print_lst(stack_b);
	clear_stacks(stack_a, stack_b);
	return (0);
}


/* 
	ordenar os numeros normalmente em um array de inteiros e fzr um sorting
	add position field na linked list para guardar a posição de cada numero na stack

	criar um algoritmo que coloque um numero na sua respectiva posição
	fazer um loop ate que todos os numeros estejam na posição correta

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
