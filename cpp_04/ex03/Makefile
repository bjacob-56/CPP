SRC_DIR	:= srcs/
OBJ_DIR	:= obj/

OBJ_DIRS = $(OBJ_DIR)

PRE_SRCS =	main AMateria Character Cure Ice MateriaSource

SRCS = $(addsuffix .cpp, $(addprefix $(SRC_DIR), $(PRE_SRCS)))
OBJS = $(addsuffix .o, $(addprefix $(OBJ_DIR), $(PRE_SRCS)))

NAME = materia

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

$(OBJS) : includes/AMateria.hpp includes/Character.hpp includes/Cure.hpp includes/Ice.hpp includes/ICharacter.hpp includes/IMateriaSource.hpp includes/MateriaSource.hpp

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$@ \033[32mcreated\033[0m"

clean:
	rm -rf $(OBJ_DIR)

fclean: 	clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
