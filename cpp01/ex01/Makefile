NAME = ZombieTeNext

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

FILES =  Zombie.cpp main.cpp zombieHorde.cpp

HED = Zombie.hpp

all : $(NAME)

$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	

clean:
	$(RM) $(NAME)
	

fclean: clean

re: fclean all

.PHONY: all clean fclean re