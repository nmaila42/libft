NAME = libft.a
CC = gcc
C = -c
FLAGS = -Wall -Wextra -Werror
AR =  ar rc
SRC = *.c
OBJ = *.o

run:
	$(CC) $(FLAGS) $(C) $(SRC)
	$(AR) $(NAME) $(OBJ)	

clean:	
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all
