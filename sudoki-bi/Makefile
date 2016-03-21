##
## Makefile for makefile in /Users/menett_a/Modules/CprogElem/sudoki-bi
## 
## Made by menett_a
## Login   <menett_a@epitech.eu>
## 
## Started on  Fri Feb 26 23:04:15 2016 menett_a
## Last update Sun Feb 28 22:00:52 2016 menett_a
##

SRC	= main.c		\
	  list.c		\
	  good.c		\
	  check.c		\
	  resolve.c		\
	  priority.c		\
	  find_zero.c		\
	  free_list.c		\
	  stock_map.c		\
	  copy_buffer.c		\
	  display_map.c		\
	  error_in_map.c

NAME	= ./bin/sudoki-bi

OBJ	= $(SRC:.c=.o)

CFLAGS	+= -W -Werror -Wall -pedantic -ansi -Wbad-function-cast -Wcast-align	\
	   -Wcast-qual -Wchar-subscripts -Winline -Wmissing-prototypes		\
	   -Wnested-externs -Wpointer-arith -Wredundant-decls -Wshadow		\
	   -Wstrict-prototypes -Wwrite-strings -Wfloat-equal -Wunreachable-code \
	   -Wconversion -Waggregate-return

all:	 $(NAME)

$(NAME): $(OBJ)
	 mkdir -p bin
	 gcc -o $(NAME) $(OBJ)

clean:
	 rm -rf $(OBJ)

fclean:	 clean
	 rm -rf $(NAME)

re:	 fclean all

.PHONY:	 all clean fclean re
