SRCS =	convert.cpp

NAME = convert

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I.

all:	$(NAME)

$(NAME):	$(SRCS) convert.hpp
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "----- \033[32m $@ created\033[0m  -----"

clean:
	rm -f $(NAME)

fclean: 	clean

re:		fclean all

.PHONY: all clean fclean re