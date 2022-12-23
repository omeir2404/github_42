NAME	= so_long

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra 

SRC	= test2.c

OBJ	= test2.o

all:	$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@
$(NAME):	$(OBJ)
			$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re