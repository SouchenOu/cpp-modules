NAME = Human

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

FILES =  HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
HED = HumanA.hpp HumanB.hpp Weapon.hpp

all : $(NAME)

$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	

clean:
	$(RM) $(NAME)
	

fclean: clean

re: fclean all

.PHONY: all clean fclean re