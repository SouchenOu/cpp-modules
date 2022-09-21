NAME = Harl

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

FILES =  Harl.cpp main.cpp
HED = Harl.hpp

all : $(NAME)

$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	

clean:
	$(RM) $(NAME)
	

fclean: clean

re: fclean all

.PHONY: all clean fclean re