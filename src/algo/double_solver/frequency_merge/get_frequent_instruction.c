/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_frequent_instruction.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:05:27 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/01 10:15:58 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

static int	get_most_frequent(int swaps, int rotates, int reverses)
{
	if (swaps >= rotates && swaps >= reverses)
		return (SS);
	if (rotates >= reverses && rotates >= swaps)
		return (RR);
	if (reverses >= swaps && reverses >= rotates)
		return (RRR);
	return (SS);
}

int	get_frequent_instruction(char *instructions)
{
	int	swaps;
	int	rotates;
	int	reverses;

	if (!instructions)
		return (0);
	swaps = 0;
	rotates = 0;
	reverses = 0;
	while (*instructions)
	{
		if (*instructions % 10 == SS)
			swaps++;
		else if (*instructions % 10 == RR)
			rotates++;
		else if (*instructions % 10 == RRR)
			reverses++;
		instructions++;
	}
	return (get_most_frequent(swaps, rotates, reverses));
}
