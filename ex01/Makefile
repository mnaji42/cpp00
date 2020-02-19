ifndef VERBOSE
.SILENT:
endif

NAME = phonebook

FLAGS = -Wall -Wextra -Werror

SRC_DIR = ./srcs/
OBJ_DIR = ./objs/
INC_DIR = ./includes/

SRC_FILES = main.cpp class_contact.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(OBJ) $(NAME)

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir $(OBJ_DIR) 2> /dev/null || true
	@clang++ $(FLAGS) -I $(INC_DIR) -o $@ -c $<

$(NAME): $(OBJ)
	@clang++ $(FLAGS) -I $(INC_DIR) $(OBJ) -o $(NAME)
	@echo "\033[32m$(NAME) generated!\033[0m"

clean:
	@rm -Rf $(OBJ_DIR)
	@echo "\033[31mObjects deleted !\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m$(NAME) deleted !\033[0m"

re: fclean all

.PHONY: all clean fclean re obj
