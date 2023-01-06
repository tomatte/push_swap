/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_lst_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:05:02 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/06 13:08:47 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*get_lst_numbers(t_lst *lst)
{
	int	*numbers;
	int	size;
	int	i;

	size = lst_size(lst);
	if (size <= 0)
		return (NULL);
	numbers = (int *) malloc(sizeof(int) * size);
	if (!numbers)
		return (NULL);
	lst = lst_first(lst);
	i = 0;
	while (lst)
	{
		numbers[i] = lst->num;
		lst = lst->next;
		i++;
	}
	return (numbers);
}

static void	print_ints(int *nums, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("%d\t", nums[i]);
		i++;
	}
	ft_printf("\n");
}

static void	sort_ints(int *numbers[], int size)
{
	int	*nums;
	int	aux;
	int	i;
	int	z;

	if (!numbers || !*numbers)
		return ;
	nums = *numbers;
	i = -1;
	while (++i < size - 1)
	{
		z = i;
		while (++z < size)
		{
			if (nums[z] < nums[i])
			{
				aux = nums[i];
				nums[i] = nums[z];
				nums[z] = aux;
			}
		}
	}
}

/* static void	set_position(int *numbers, t_lst *lst)
{
	
} */

void	fill_lst_position(t_lst *lst)
{
	int	*numbers;
	int	size;

	numbers = get_lst_numbers(lst);
	size = lst_size(lst);
	sort_ints(&numbers, size);
	print_ints(numbers, size);
}

/* 
	create a lst_find function
	use it to fill position fild of each item
 */