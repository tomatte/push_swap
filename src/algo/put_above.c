/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_above.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:19:03 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/08 14:36:26 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_above(t_lst **a, t_lst **b, int pos)
{
	while (lst_first(*a)->index != pos)
	{
		ra(*a);
	}
	*a = lst_first(*a);
	pb(a, b);
	while (lst_first(*a)->index != pos + 1)
	{
		ra(*a);
	}
	*a = lst_first(*a);
	pa(b, a);
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