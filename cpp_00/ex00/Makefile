SRCS =	megaphone.cpp
OBJS=$(SRCS:.cpp=.o)

NAME = megaphone

CC = clang++
CFLAGS = -Wall -Wextra -Werror

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "----- \033[32m $@ created\033[0m  -----"

clean:
	rm -f $(OBJS)

fclean: 	clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re