/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_strategy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:47:52 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 15:55:17 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	execute_updown(t_lst *a, t_lst *b, t_strategy *strategy)
{

}

void	execute_rotates(t_lst *a, t_lst *b, t_strategy *strategy)
{

}

void	execute_reverses(t_lst *a, t_lst *b, t_strategy *strategy)
{

}

void	execute_strategy(t_lst *a, t_lst *b, t_strategy *strategy)
{
	int	rotates;
	int	reverses;
	int	updowns;

	rotates = strategy->rotate_moves;
	reverses = strategy->reverses_moves;
	updowns = strategy->updown_moves;
	if (updowns <= reverses && updowns <= rotates)
		execute_updown();
	else if (rotates <= reverses && rotates <= updowns)
		execute_rotates();
	else
		execute_reverses();
}
