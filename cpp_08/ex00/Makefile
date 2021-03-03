SRCS =	main.cpp

NAME = easyfind

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I. -std=c++98

all:	$(NAME)

$(NAME):	$(SRCS) easyfind.hpp
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "----- \033[32m $@ created\033[0m  -----"

clean:
	rm -f $(NAME)

fclean: 	clean

re:		fclean all

.PHONY: all clean fclean re