NAME = push_swap

SOURCES = ft_push_swap.c push.c reverse_rotate.c swap.c rotate.c \
ft_atoi.c ft_lstadd_back.c printf/ft_printf.c printf/ft_putnbr.c \
 checkifgood.c ft_sort_int_tab.c push_counter.c reverse_rotate_counter.c \
 rotate_counter.c swap_counter.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
