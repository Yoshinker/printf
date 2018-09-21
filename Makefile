NAME = run

CC = gcc

CFLAGS = -Wall -Werror -Werror -Iincludes

SRC_DIR = srcs

FILES = ft_putchar.o \
	ft_putstr.o \
	ft_putnbr.o \
	ft_putfloat.o \
	ft_cptpourcent.o \
	ft_printf.o \
	main.o

OBJS = $(addprefix $(SRC_DIR)/, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.o : %.c
	$(CC) $(CFLAGS) -c $^

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
