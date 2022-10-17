OBJ = ${FILES:.c=.o}

BOBJ = ${BFILES:.c=.o}

POLICE = -Wall -Wextra -Werror
NAME = libft.a
AR = ar -rcs

all: ${NAME}

${NAME}: ${OBJ}
	@${AR} $@ $^

bounty: ${BOBJ} ${NAME}
	@${AR} ${NAME} ${BOBJ}

.PHONY: all bonus clean fclean re


