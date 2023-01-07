NAME = push_swap
SOURCES = push_swap.c srcs/*.c

OBJECTS	=	$(SOURCES:.c=.o)
CC	=	gcc
CFLAGS = -Wall -Wextra -Werror 

LIBFT = ./libft/libft.a

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJECTS)
			$(CC) $(OBJECTS) libft/libft.a -o $(NAME)

clean:		
			rm -f $(OBJECTS)
			make clean -C libft

$(LIBFT):
			make bonus -C libft

fclean:		clean
			rm -f $(NAME)
			make fclean -C libft


re:			fclean $(NAME)
			make re -C libft

.PHONY:	all clean fclean re