ifndef VERBOSE
.SILENT:
endif

NAME = megaphone

FLAGS = -Wall -Wextra -Werror


SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(OBJ) $(NAME)

%.o: %.c
	@clang++ $(FLAGS) -o $@ -c $<
	echo coucou

$(NAME):
	@clang++ $(OBJ) -o $(NAME)
	@echo "\033[32m$(NAME) generated!\033[0m"

clean:
	@rm -Rf $(OBJ)
	@echo "\033[31mObjects deleted !\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m$(NAME) deleted !\033[0m"

re: fclean all

.PHONY: all clean fclean re
