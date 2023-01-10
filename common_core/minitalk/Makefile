# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 13:15:23 by rbayoumi          #+#    #+#              #
#    Updated: 2023/01/10 15:33:54 by rbayoumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Wall -Wextra -Werror
CC := cc
NAME := client
NAMESRV := server
LIBFTSRC := libft/ft_char.c libft/ft_str.c libft/ft_nbr.c libft/ft_atoi.c libft/ft_isdigit.c

all: $(NAME) $(NAMRSRV)

$(NAMESRV) $(NAME): server.c client.c $(LIBFSRC)
	$(CC) $(CFLAGS) -o client client.c $(LIBFTSRC)
	$(CC) $(CFLAGS) -o server server.c $(LIBFTSRC)

clean:
	@rm $(NAME) $(NAMESRV)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
