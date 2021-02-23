SRCS =	ex04.cpp

NAME = ex04

CC = clang++
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "----- \033[32m $@ created\033[0m  -----"

clean:
	rm -f $(NAME)

fclean: 	clean

re:		fclean all

.PHONY: all clean fclean re