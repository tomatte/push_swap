/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:56:55 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/11 21:42:47 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker.h"

int	main(int argc, char *argv[])
{
	int	i = 0;

	if (argc <= 1)
		exit(0);
	while (++i < argc)
		ft_printf("%s ", argv[i]);
	ft_printf("\n");	
	return (0);
}
