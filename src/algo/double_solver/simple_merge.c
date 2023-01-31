/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_merge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:34:04 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/31 17:57:05 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ab_merge(char **a, char **b, char **merge)
{
	while (**a && **b)
	{
		if (**a % 10 == **b % 10)
		{
			ft_str_push_char(merge, **a % 10);
			(*a)++;
			(*b)++;
		}
		else
		{
			ft_str_push_char(merge, **a);
			(*a)++;
		}
	}
}

static void	complete_remaining_a(char **a, char **merge)
{
	while (**a)
	{
		ft_str_push_char(merge, **a);
		(*a)++;
	}
}

static void	complete_remaining_b(char **b, char **merge)
{
	while (**b)
	{
		ft_str_push_char(merge, **b);
		(*b)++;
	}
}

char	*simple_merge(char *a, char *b)
{
	char	*merge;

	merge = ft_strdup("");
	ab_merge(&a, &b, &merge);
	complete_remaining_a(&a, &merge);
	complete_remaining_b(&b, &merge);
	return (merge);
}
