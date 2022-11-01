NAME = Stack

FLAGS = -Wall -Werror -Wextra -std=c++11

RM = rm -rf

FILES =  main.cpp
HED = MutantStack.hpp

all : $(NAME)

$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	

clean:
	$(RM) $(NAME)
	

fclean: clean

re: fclean all

.PHONY: all clean fclean re