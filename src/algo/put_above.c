/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_above.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:19:03 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 08:15:51 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_above(t_lst **a, t_lst **b, int pos)
{
	(void) b;
	while (lst_first(*a)->position != pos)
	{
		rotate(*a);
		ft_printf("RA\n");
	}
	*a = lst_first(*a);
	push(a, b);
	ft_printf("PB\n");
	while (lst_first(*a)->position != pos + 1)
	{
		rotate(*a);
		ft_printf("RA\n");
	}
	*a = lst_first(*a);
	push(b, a);
	ft_printf("PA\n");
}

/* 
4
5
1
2
3

4

this strategy consists in putting a number above his next
to achieve this the stack_b will be used

first push the targeted number to stack_b
then rotate until the number that will be below it becomes the first
then push it to stack_a again
now it is above it

 */