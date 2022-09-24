NAME = Animal

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

FILES =  Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp Wrongcat.cpp
HED = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

all : $(NAME)

$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	

clean:
	$(RM) $(NAME)
	

fclean: clean

re: fclean all

.PHONY: all clean fclean re