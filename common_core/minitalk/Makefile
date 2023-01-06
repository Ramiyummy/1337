CFLAGS := -Wall -Wextra -Werror
CC := cc
NAME := client
NAMESRV := server
LIBFT := libft


$(NAME) $(NAMESRV): client.o server.o
	$(CC) -o $@ $^

client.o server.o: client.c server.c
	$(CC) $(CFLAGS) -o $@ -c $<

action:
	@make -C $(LIBFT) 
	@cp $(LIBFT)/Libft.a .
	@make all

all: $(NAME) $(NAMESRV)

clean:

fclean:

re: fclean all

.PHONY: all clean fclean re


