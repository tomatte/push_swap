# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 13:21:58 by dbrandao          #+#    #+#              #
#    Updated: 2023/02/14 13:28:50 by dbrandao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	
COMMON_SRC	=	lst_new.c \
				lst_size.c \
				lst_first.c \
				lst_last.c \
				lst_push.c \
				lst_clear.c \
				lst_find_by_num.c \
				lst_find_by_index.c \
				lst_remove_first.c \
				lst_add_front.c \
				lst_remove_last.c \
				die.c \
				check_numbers.c \
				check_duplicated_values.c \
				check_numbers_size.c \
				get_numbers.c \
				swap.c \
				push.c \
				rotate.c \
				reverse_rotate.c \
				is_lst_sorted.c \
				fill_lst_index.c \

OBJS_DIR_COMMON	= common_objs

OBJS_COMMON		=	$(patsubst %.c,$(OBJS_DIR_COMMON)/%.o, $(COMMON_SRC))

#------------------------ PUSH_SWAP ----------------------------
SRC			=	push_swap.c \
				get_position.c \
				sort.c \
				two_solver.c \
				three_solver.c \
				sort_verification.c \
				move_to_top_b.c \
				move_to_top_a.c \
				push_rotate.c \
				get_top_index.c \
				fill_updown_strategy.c \
				fill_strategy.c \
				first_ab.c \
				fill_rotate_strategy.c \
				fill_reverse_strategy.c \
				execute_strategy.c \
				push_rotate_algorithm.c \
				add_instruction.c \
				error_management.c \

NAME		=	push_swap

OBJS_DIR_PUSH	=	objects_push

OBJS_PUSH			=	$(patsubst %.c,$(OBJS_DIR_PUSH)/%.o, $(SRC))
#------------------------------------------------------------#


#------------------------ CHECKER ----------------------------#
BONUS_SRC	=	checker.c \
				read_instructions.c \
				is_str_equal.c \
				execute_instructions.c \
				error_management_checker.c \

BONUS_NAME	=	checker

OBJS_DIR_CHECKER	=	objects_checker

OBJS_BONUS	=	$(patsubst %.c,$(OBJS_DIR_CHECKER)/%.o, $(BONUS_SRC))
#------------------------------------------------------------#

LIBFT		=	./libft/libftprintf.a

CFLAGS		=	-g -I./ -Wall -Wextra -Werror

VPATH		=	./src \
				./src/error \
				./src/list \
				./src/utils \
				./src/instructions \
				./src/algo \
				./src/algo/util \
				./src/algo/push_rotate \
				./bonus_src \
				./bonus_src/others \
				./bonus_src/utils \


CC					=	cc

$(OBJS_DIR_COMMON)/%.o:	%.c
							$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR_PUSH)/%.o:	%.c
							$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR_CHECKER)/%.o:	%.c
							$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus:	$(BONUS_NAME)

$(OBJS_DIR_COMMON):
						mkdir -p $@

$(OBJS_DIR_PUSH):
						mkdir -p $@

$(OBJS_DIR_CHECKER):
						mkdir -p $@

$(NAME): $(OBJS_DIR_PUSH) $(OBJS_DIR_COMMON) $(OBJS_PUSH) $(OBJS_COMMON) $(LIBFT)
	$(CC) $(OBJS_PUSH) $(OBJS_COMMON) ${CFLAGS} ${LIBFT} -o $@

$(BONUS_NAME): $(OBJS_DIR_COMMON) $(OBJS_DIR_CHECKER) $(OBJS_BONUS) $(OBJS_COMMON) $(LIBFT)
	$(CC) ${OBJS_BONUS} $(OBJS_COMMON)  ${CFLAGS} ${LIBFT} -o $@

$(LIBFT):
	make -C ./libft bonus

clean:
	rm -rf ${OBJS_DIR_COMMON} ${OBJS_DIR_PUSH} ${OBJS_DIR_CHECKER}
	make -C ./libft clean

fclean:	clean
	rm -f ${NAME}
	rm -f ${BONUS_NAME}
	make -C ./libft fclean

re: fclean all

.PHONY:	all clean fclean re bonus