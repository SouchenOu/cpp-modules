NAME = DiamondTrap

FLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

RM = rm -rf

FILES =  ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
HED = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

all : $(NAME)

$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	

clean:
	$(RM) $(NAME)
	

fclean: clean

re: fclean all

.PHONY: all clean fclean re