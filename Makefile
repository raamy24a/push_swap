NAME = push_swap
SOURCES = ft_push_swap.c push.c reverse_rotate.c swap.c rotate.c ft_atoi.c ft_lstadd_back.c



OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc ${NAME} ${OBJECTS}

%.o: %.c
	@$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re