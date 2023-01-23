/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:22:27 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 19:37:27 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libftprintf.h"

typedef struct	s_lst
{
	int				num;
	int				index;
	struct s_lst	*next;
	struct s_lst	*prev;
}	t_lst;

//list
t_lst	*lst_new(int num);
int		lst_size(t_lst *lst);
t_lst	*lst_first(t_lst *lst);
void	lst_unshift(t_lst **lst, t_lst *node);
t_lst	*lst_last(t_lst *lst);
void	lst_push(t_lst **lst, t_lst *node);
t_lst	*lst_shift(t_lst **lst);
t_lst	*lst_pop(t_lst *lst);
void	lst_clear(t_lst *lst);
t_lst	*lst_find_by_num(t_lst *lst, int num);
t_lst	*lst_find_by_index(t_lst *stack, int index);

//error
void	error_management(int argc, char **argv);
void	die(void);
void	check_numbers(int argc, char **argv);
void	check_duplicated_values(int argc, char **argv);
void	check_numbers_size(int argc, char **argv);


//utils
t_lst	*get_numbers(int argc, char **argv);
void	fill_lst_index(t_lst *lst);
int		get_position(t_lst *lst, int index);

//instructions


//algo
void	sort(t_lst *a);
void	put_above(t_lst **a, t_lst **b, int pos);
void	two_solver(t_lst *a);
void	three_solver(t_lst *a);
void	simple_solver(t_lst **a, t_lst **b);

//double_solving
void	swap_and_move(t_lst *stack);
void	twister_move(t_lst **s);
void	move_to_top(t_lst *stack, int index);

//temp
void	print_lst(t_lst *lst);

#endif