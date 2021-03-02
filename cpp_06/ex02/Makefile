SRCS =	Base.cpp

NAME = base

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I.

all:	$(NAME)

$(NAME):	$(SRCS) Base.hpp
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "----- \033[32m $@ created\033[0m  -----"

clean:
	rm -f $(NAME)

fclean: 	clean

re:		fclean all

.PHONY: all clean fclean re