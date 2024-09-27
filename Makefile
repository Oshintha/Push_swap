# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 16:11:20 by aoshinth          #+#    #+#              #
#    Updated: 2024/09/27 15:28:53 by aoshinth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BNAME = checker
SRCS = \
	push_swap.c handle_errors.c push.c swap.c rotate.c rev_rotate.c \
	init_a_to_b.c init_b_to_a.c sort_stacks.c sort_three.c split.c \
	stack_int.c stack_utils.c rotate_both.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./libft/libft.a

all: $(NAME)

%.o: %.c
	@$(CC) -c $(CFLAGS) $?

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)


$(LIBFT):
	@make -C libft

clean:
	@rm -fr $(OBJS) $(BOBJS)
	@make clean -C libft

fclean: clean
	@rm -f $(NAME) $(BNAME)
	@make fclean -C libft
		
re: fclean all

.PHONY: all clean fclean re
