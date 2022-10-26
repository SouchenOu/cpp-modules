NAME = data

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

FILES =  main.cpp data.cpp
HED = data.hpp

all : $(NAME)
$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	
clean:
	$(RM) $(NAME)
	
fclean: clean
re: fclean all
.PHONY: all clean fclean re