SRC_DIR	:= srcs/
OBJ_DIR	:= obj/

OBJ_DIRS = $(OBJ_DIR)

PRE_SRCS =	main Sorcerer Victim Peon Pony

SRCS = $(addsuffix .cpp, $(addprefix $(SRC_DIR), $(PRE_SRCS)))
OBJS = $(addsuffix .o, $(addprefix $(OBJ_DIR), $(PRE_SRCS)))

NAME = sorcerer

CC = clang++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC =	-I./includes

all:	$(NAME)

$(NAME): $(OBJ_DIRS) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(INC) -o $(NAME) 
	@echo "----- \033[32m $@ created\033[0m  -----"

$(OBJ_DIRS):
	mkdir -p $(OBJ_DIRS)

$(OBJS) : includes/Sorcerer.hpp includes/Victim.hpp includes/Peon.hpp includes/Pony.hpp

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$@ \033[32mcreated\033[0m"

clean:
	rm -rf $(OBJ_DIR)

fclean: 	clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
