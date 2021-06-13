# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asebrech <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/23 16:13:10 by asebrech          #+#    #+#              #
#    Updated: 2021/06/13 18:36:07 by asebrech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = includes
DLIB = libft
PLIB = libft/libft.a
NAME = libpush_swap.a
NAME_B = libchecker.a
EXEC = push_swap
EXEC_B = checker
SRC =	move/ft_push.c \
	move/ft_swap.c \
	move/ft_rotate.c \
	move/ft_rrotate.c \
	srcs/push_swap.c \
	srcs/push_swap_utiles.c \
	srcs/fill.c\
	srcs/ft_quicksort.c \
	srcs/ft_distribute.c \
	srcs/ft_distrib_first.c \
	srcs/ft_recovery.c \
	srcs/ft_threesort.c
OBJ = $(SRC:.c=.o)
SRC_B =	get_next_line/get_next_line.c\
	get_next_line/get_next_line_utils.c\
	srcs_checker/main.c\
	srcs_checker/checker.c
OBJ_B = $(SRC_B:.c=.o)
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	make -C $(DLIB) bonus
	cp $(PLIB) $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	$(CC) $(CFLAGS) -I$(HEADER) srcs/main.c -L. -lpush_swap -o $(EXEC)

checker : $(NAME) $(OBJ_B)
	cp $(NAME) $(NAME_B)
	ar rc $(NAME_B) $(OBJ_B)
	ranlib $(NAME_B)
	$(CC) $(CFLAGS) -I$(HEADER) -L. -lchecker -o $(EXEC_B)

clean :
	make -C $(DLIB) clean
	$(RM) $(OBJ)
	$(RM) $(OBJ_B)
	$(RM) $(NAME)
	$(RM) $(NAME_B)

fclean : clean
	$(RM) $(PLIB)
	$(RM) $(EXEC)
	$(RM) $(EXEC_B)

re : fclean all

.c.o :
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $(<:.c=.o)

.PHONY : all clean fclean re checker
