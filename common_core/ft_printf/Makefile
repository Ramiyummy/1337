# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 08:07:57 by rbayoumi          #+#    #+#              #
#    Updated: 2022/10/31 09:33:59 by rbayoumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

POLICE := -Wall -Wextra -Werror
NAME := libftprintf.a
AR := ar -rcs

FILES := ft_char.c ft_str.c

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
	@gcc $(POLICE) test.c $(NAME)
	@./a.out | cat -e

.PHONY: all clean fclean re
