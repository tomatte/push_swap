/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:22:27 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/29 10:11:13 by dbrandao         ###   ########.fr       */
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
t_lst	*lst_last(t_lst *lst);
void	lst_push(t_lst **lst, t_lst *node);
void	lst_clear(t_lst *lst);
t_lst	*lst_find_by_num(t_lst *lst, int num);
t_lst	*lst_find_by_index(t_lst *stack, int index);
t_lst	*lst_remove_first(t_lst **lst);
void	lst_add_front(t_lst **lst, t_lst *node);
t_lst	*lst_remove_last(t_lst **lst);

//error
void	error_management(int argc, char **argv);
void	die(void);
void	check_numbers(int argc, char **argv);
void	check_duplicated_values(int argc, char **argv);
void	check_numbers_size(int argc, char **argv);
void	sort_verification(t_lst *stack);


//utils
t_lst	*get_numbers(int argc, char **argv);
void	fill_lst_index(t_lst *lst);
int		get_position(t_lst *lst, int index);
int		is_lst_sorted(t_lst *a);

//base instructions
void	swap(t_lst **lst);
void	push(t_lst **dest, t_lst **src);
void	rotate(t_lst **lst);
void	reverse_rotate(t_lst **lst);

//printing instructions
void	sa(t_lst **a);
void	sb(t_lst **b);
void	ss(t_lst **a, t_lst **b);
void	pa(t_lst **a, t_lst **b);
void	pb(t_lst **b, t_lst **a);
void	ra(t_lst **a);
void	rb(t_lst **b);
void	rr(t_lst **a, t_lst **b);
void	rra(t_lst **a);
void	rrb(t_lst **b);
void	rrr(t_lst **a, t_lst **b);

//algo
void	sort(t_lst *a);
void	two_solver(t_lst *a);
void	three_solver(t_lst *a);
void	four_solver(t_lst *a);
void	five_solver(t_lst *a);
void	radix(t_lst *a);
void	move_to_top(t_lst **stack, int index);

//double_solver
void	double_solver(t_lst *a);
void	twister_move(t_lst **a);

//temp
void	print_lst(t_lst *lst);

#endif