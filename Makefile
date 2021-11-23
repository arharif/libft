NAME := libft.a

SRCS := $(wildcard *.c)

OBJS := $(SRCS:.c=.o)

CFLAGS := -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

bonus: $(OBJSB)
	ar -crs $(NAME) $^

$(NAME): $(OBJS)
	ar -crs $@ $^

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
