/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:22:27 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/24 13:28:39 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libftprintf.h"

typedef struct	s_lst
{
	int				num;
	struct s_lst	*next;
	struct s_lst	*prev;
}	t_lst;

//list
t_lst	*lst_new(int num);
int		lst_size(t_lst *lst);
t_lst	*lst_first(t_lst *lst);
void	lst_unshift(t_lst *lst, t_lst *node);
t_lst	*lst_last(t_lst *lst);
void	lst_push(t_lst *lst, t_lst *node);

//error
void	error_management(int argc, char **argv);
void	die(void);
void	check_numbers(int argc, char **argv);
void	check_duplicated_values(int argc, char **argv);
void	check_numbers_size(int argc, char **argv);


#endif