# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbayoumi <rbayoumi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 07:33:19 by rbayoumi          #+#    #+#              #
#    Updated: 2022/10/17 19:06:14 by rbayoumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

POLICE := -Wall -Wextra -Werror
NAME := libft.a
AR := ar -rcs

FILES := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
#	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
#	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
#	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
#	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
#	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

#BFILES := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c/

OBJ = $(FILES:.c=.o)
#BOJB = $(BFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $@ $^

#bounty: $(BOBJ) $(NAME)
#	@$(AR) $(NAME) $(BOBJ)

%.o : %.c libft.h
	@$(CC) -c $(POLICE) $< -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: re
	@gcc test.c  -Wall -Wextra -Werror libft.a
	@./a.out | cat -e

.PHONY: all clean fclean re
