# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 08:07:57 by rbayoumi          #+#    #+#              #
#    Updated: 2022/11/05 18:15:48 by rbayoumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

POLICE := -Wall -Wextra -Werror
NAME := libftprintf.a
AR := ar -rcs

FILES := ft_char.c ft_str.c ft_nbr.c ft_unsigned_nbr.c ft_little_hexa.c\
	ft_big_hexa.c ft_printf.c ft_add.c\

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $@ $^

%.o : %.c ft_printf.h
	@$(CC) -c $(POLICE) $< -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: re
	@gcc $(POLICE) ft_printf.c $(NAME)
	@./a.out

.PHONY: all clean fclean re
