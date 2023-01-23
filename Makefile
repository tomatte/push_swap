# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 13:21:58 by dbrandao          #+#    #+#              #
#    Updated: 2023/01/23 19:35:47 by dbrandao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	push_swap.c \
				die.c \
				check_numbers.c \
				error_management.c \
				check_duplicated_values.c \
				check_numbers_size.c \
				lst_new.c \
				lst_size.c \
				lst_first.c \
				lst_last.c \
				lst_push.c \
				lst_clear.c \
				get_numbers.c \
				fill_lst_index.c \
				lst_find_by_num.c \
				lst_find_by_index.c \
				print_lst.c \
				get_position.c \
				#sort.c \
				put_above.c \
				two_solver.c \
				three_solver.c \
				simple_solver.c \
				twister_move.c \
				swap_and_move.c \
				move_to_top.c \

				

OBJS_DIR			=	objects

OBJS				=	$(patsubst %.c,objects/%.o, $(SRC))

NAME		=	push_swap

LIBFT		=	./libft/libftprintf.a

CFLAGS		=	-g -I./ -Wall -Werror -Wextra

VPATH				=	./src \
						./src/error \
						./src/list \
						./src/utils \
						./src/instructions \
						./src/algo \
						./src/algo/simple_solver \
						./src/algo/double_solving \
						


CC					=	cc

$(OBJS_DIR)/%.o:	%.c
							$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(OBJS_DIR):
						mkdir -p $@

$(NAME): $(OBJS_DIR) $(OBJS) $(LIBFT)
	$(CC) ${OBJS} ${CFLAGS} ${LIBFT} -o $@
	

$(LIBFT):
	make -C ./libft bonus

clean:
	rm -rf ${OBJS_DIR}
	make -C ./libft clean

fclean:	clean
	rm -f ${NAME}
	make -C ./libft fclean

re: fclean all

.PHONY:	all clean fclean re