NAME = zombiezzzz

SRC = Zombie.cpp randomChump.cpp newZombie.cpp main.cpp

OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
RM = rm -fr

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re