# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asebrech <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/23 16:13:10 by asebrech          #+#    #+#              #
#    Updated: 2021/05/25 14:14:24 by asebrech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = includes
DLIB = libft
PLIB = libft/libft.a
NAME = libpush_swap.a
EXEC = push_swap
SRC = srcs/main.c \
	  srcs/ft_filltab.c \
	  srcs/push_swap_utiles.c
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
