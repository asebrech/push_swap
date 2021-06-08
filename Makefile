# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asebrech <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/23 16:13:10 by asebrech          #+#    #+#              #
#    Updated: 2021/06/08 12:26:12 by asebrech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = includes
DLIB = libft
PLIB = libft/libft.a
NAME = libpush_swap.a
EXEC = push_swap
SRC =	move/ft_push.c \
	move/ft_swap.c \
	move/ft_rotate.c \
	move/ft_rrotate.c \
	srcs/main.c \
	srcs/push_swap.c \
	srcs/push_swap_utiles.c \
	srcs/fill.c\
	srcs/ft_quicksort.c \
	srcs/ft_distribute.c \
	srcs/recovery.c \
	srcs/ft_threesort.c
OBJ = $(SRC:.c=.o)
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	make -C $(DLIB) bonus
	cp $(PLIB) $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	$(CC) $(CFLAGS) -I$(HEADER) -L. -lpush_swap -o $(EXEC)
	rm -rf $(NAME)
clean :
	make -C $(DLIB) clean
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(PLIB)
	$(RM) $(EXEC)

re : fclean all

.c.o :
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $(<:.c=.o)

.PHONY : all clean fclean re
